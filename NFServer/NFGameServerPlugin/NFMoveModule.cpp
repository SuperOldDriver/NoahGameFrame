/*
            This file is part of: 
                NoahFrame
            https://github.com/ketoo/NoahGameFrame

   Copyright 2009 - 2019 NoahFrame(NoahGameFrame)

   File creator: lvsheng.huang
   
   NoahFrame is open-source software and you can redistribute it and/or modify
   it under the terms of the License; besides, anyone who use this file/software must include this copyright announcement.

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/


#include "NFMoveModule.h"
#include "NFComm/NFMessageDefine/NFProtocolDefine.hpp"

bool NFMoveModule::Init()
{
	m_pKernelModule = pPluginManager->FindModule<NFIKernelModule>();
	m_pElementModule = pPluginManager->FindModule<NFIElementModule>();
	m_pClassModule = pPluginManager->FindModule<NFIClassModule>();
	m_pLogModule = pPluginManager->FindModule<NFILogModule>();
	m_pEventModule = pPluginManager->FindModule<NFIEventModule>();
	m_pCellModule = pPluginManager->FindModule<NFICellModule>();
	m_pGameServerNet_ServerModule = pPluginManager->FindModule<NFIGameServerNet_ServerModule>();
	
    return true;
}

bool NFMoveModule::Shut()
{
	return true;
}

bool NFMoveModule::Execute()
{
	return true;
}

bool NFMoveModule::AfterInit()
{
	return true;
}

bool NFMoveModule::ReadyExecute()
{
	return true;
}

int NFMoveModule::MoveToPos(const NFGUID & self, const NFVector3 & pos, const bool pathFinding)
{
	if (pathFinding)
	{

	}
	else
	{

	}

	return 0;
}
