#ifndef ossimTools_HEADER
#define ossimTools_HEADER 1

#include <oms/Constants.h>
#include <string>
#include <vector>


namespace oms
{

class OMSDLL ThreeDISA
{
public:
   ThreeDISA(const std::string& name);
   ~ThreeDISA();

   /**
    * Intended for calling from web service controller JNI code. Performs the source selection
    * given the specifications and images provided in the query. Returns with JSON response. Throws
    * exception on error (bad JSON format or MSP error encountered).
    * @param json_query JSON-formatted query string documented in
    * https://docs.google.com/document/d/1DXekmYm7wyo-uveM7mEu80Q7hQv40fYbtwZq-g0uKBs/edit?usp=sharing
    * TODO: Incorporate passing of sessionID in support of stateful session handling.
    */
   static void sourceSelect(const std::string& json_query, std::string& json_response);

   /**
    * Interface TBD
    */
   static std::string startSession(const std::string& sessionID=std::string(""));

   /**
    * Interface TBD
    */
   static std::string endSession(const std::string& sessionID);

   /**
    * Interface TBD -- NOTE: This method implies some state is being saved. Need to discuss about
    * launching ossimd daemon for each session and keeping track of the connection in the
    * SessionManager.
    */
   const std::vector<std::string>& getActiveSessionIDs();

   /**
    * Interface TBD
    */
   static void generateAutoTiePoints(const std::string& sessionID);

   /**
    * Interface TBD
    */
   static void triangulate(const std::string& sessionID);

   /**
    * Interface TBD
    */
   static void generateDSM(const std::string& sessionID);

   /**
    * Interface TBD
    */
   static void logMessage(const std::string& sessionID, const std::string& message);

private:
   static bool m_locked;
};

} // end namespace oms

#endif
