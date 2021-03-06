/* ==========================================================
* d2warden
* https://bitbucket.org/lolet/d2warden
* ==========================================================
*			Copyright 2008 marsgod
*			 2011-2015 Bartosz Jankowski
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
* ========================================================== */


#include "stdafx.h"


/**
	Executed after all standard events are parsed
	Warning: The server is now inside the critical section (pGame->pLock) !
*/
void __stdcall MainLoop(Game *pGame)
{
	if (!Warden::getInstance().empty())
		Warden::getInstance().loop(pGame);
}

void __declspec(naked) MainLoop_ASM()
{
	__asm
	{

		push esi // pGame

		call MainLoop

		pop edi
		pop ebx
		pop esi
		retn
	}
}