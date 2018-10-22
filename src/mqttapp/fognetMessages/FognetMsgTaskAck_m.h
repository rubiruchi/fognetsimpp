//
// Generated file, do not edit! Created by nedtool 4.6 from inet/applications/mqttapp/fognetMessages/FognetMsgTaskAck.msg.
//

#ifndef _INET_FOGNETMSGTASKACK_M_H_
#define _INET_FOGNETMSGTASKACK_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif


namespace inet {

/**
 * Class generated from <tt>inet/applications/mqttapp/fognetMessages/FognetMsgTaskAck.msg:17</tt> by nedtool.
 * <pre>
 * packet FognetMsgTaskAck
 * {
 *     string requestID;
 *     int status;
 * 
 * }
 * </pre>
 */
class FognetMsgTaskAck : public ::cPacket
{
  protected:
    opp_string requestID_var;
    int status_var;

  private:
    void copy(const FognetMsgTaskAck& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const FognetMsgTaskAck&);

  public:
    FognetMsgTaskAck(const char *name=NULL, int kind=0);
    FognetMsgTaskAck(const FognetMsgTaskAck& other);
    virtual ~FognetMsgTaskAck();
    FognetMsgTaskAck& operator=(const FognetMsgTaskAck& other);
    virtual FognetMsgTaskAck *dup() const {return new FognetMsgTaskAck(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual const char * getRequestID() const;
    virtual void setRequestID(const char * requestID);
    virtual int getStatus() const;
    virtual void setStatus(int status);
};

inline void doPacking(cCommBuffer *b, FognetMsgTaskAck& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, FognetMsgTaskAck& obj) {obj.parsimUnpack(b);}

} // namespace inet

#endif // ifndef _INET_FOGNETMSGTASKACK_M_H_
