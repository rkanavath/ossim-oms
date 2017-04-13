#include <oms/ThreeDISA.h>
#include <3disa/SourceSelection.h>
#include <iostream>
#include <exception>

using namespace oms;
using namespace O2;
using namespace std;

bool ThreeDISA::m_locked = false;

ThreeDISA::ThreeDISA(string name)
{
}

ThreeDISA::~ThreeDISA()
{
}

void ThreeDISA::sourceSelect(const string& json_query, string& json_response)
{
   try
   {
      SourceSelection::sourceSelect(json_query, json_response);
   }
   catch (exception& e)
   {
      cout<<e.what()<<endl;
   }
}

string ThreeDISA::startSession(const string& sessionID)
{

}


string ThreeDISA::endSession(const string& sessionID)
{

}


const vector<string>& ThreeDISA::getActiveSessionIDs()
{

}


void ThreeDISA::generateAutoTiePoints(const string& sessionID)
{

}


void ThreeDISA::logMessage(const string& sessionID, const string& message)
{

}

