#include <oms/ThreeDISA.h>
#include <3disa/SourceSelection.h>
#include <iostream>
#include <exception>

bool oms::ThreeDISA::m_locked = false;

oms::ThreeDISA::ThreeDISA(const std::string& name)
{
}

oms::ThreeDISA::~ThreeDISA()
{
}

void oms::ThreeDISA::sourceSelect(const std::string& json_query, std::string& json_response)
{
   try
   {
      O2::SourceSelection::sourceSelect(json_query, json_response);
   }
   catch (std::exception& e)
   {
      std::cout<<e.what()<<std::endl;
   }
}

std::string oms::ThreeDISA::startSession(const std::string& sessionID)
{

}


std::string oms::ThreeDISA::endSession(const std::string& sessionID)
{

}


const std::vector<std::string>& oms::ThreeDISA::getActiveSessionIDs()
{

}


void oms::ThreeDISA::generateAutoTiePoints(const std::string& sessionID)
{

}


void oms::ThreeDISA::logMessage(const std::string& sessionID, const std::string& message)
{

}

