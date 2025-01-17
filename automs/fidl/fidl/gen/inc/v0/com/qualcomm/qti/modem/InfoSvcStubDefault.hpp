/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.2.0.v202012010850.
* Used org.franca.core 0.13.1.201807231814.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V0_COM_QUALCOMM_QTI_MODEM_Info_Svc_STUB_DEFAULT_HPP_
#define V0_COM_QUALCOMM_QTI_MODEM_Info_Svc_STUB_DEFAULT_HPP_


#include <CommonAPI/Export.hpp>

#include <v0/com/qualcomm/qti/modem/InfoSvcStub.hpp>
#include <cassert>
#include <sstream>

# if defined(_MSC_VER)
#  if _MSC_VER >= 1300
/*
 * Diamond inheritance is used for the CommonAPI::Proxy base class.
 * The Microsoft compiler put warning (C4250) using a desired c++ feature: "Delegating to a sister class"
 * A powerful technique that arises from using virtual inheritance is to delegate a method from a class in another class
 * by using a common abstract base class. This is also called cross delegation.
 */
#    pragma warning( disable : 4250 )
#  endif
# endif

namespace v0 {
namespace com {
namespace qualcomm {
namespace qti {
namespace modem {

/**
 * Provides a default implementation for InfoSvcStubRemoteEvent and
 * InfoSvcStub. Method callbacks have an empty implementation,
 * remote set calls on attributes will always change the value of the attribute
 * to the one received.
 *
 * Override this stub if you only want to provide a subset of the functionality
 * that would be defined for this service, and/or if you do not need any non-default
 * behaviour.
 */
class COMMONAPI_EXPORT_CLASS_EXPLICIT InfoSvcStubDefault
    : public virtual InfoSvcStub {
public:
    COMMONAPI_EXPORT InfoSvcStubDefault()
        : remoteEventHandler_(this),
          interfaceVersion_(InfoSvc::getInterfaceVersion()) {
    }

    COMMONAPI_EXPORT const CommonAPI::Version& getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> _client) {
        (void)_client;
        return interfaceVersion_;
    }

    COMMONAPI_EXPORT InfoSvcStubRemoteEvent* initStubAdapter(const std::shared_ptr< InfoSvcStubAdapter> &_adapter) {
        CommonAPI::Stub<InfoSvcStubAdapter, InfoSvcStubRemoteEvent>::stubAdapter_ = _adapter;
        return &remoteEventHandler_;
    }

    COMMONAPI_EXPORT virtual void GetImei(const std::shared_ptr<CommonAPI::ClientId> _client, GetImeiReply_t _reply) {
        (void)_client;
        ::v0::com::qualcomm::qti::modem::CommonTypes::Result error;
        std::string imei = "";
        _reply(error, imei);
    }


protected:
    class COMMONAPI_EXPORT_CLASS_EXPLICIT RemoteEventHandler: public virtual InfoSvcStubRemoteEvent {
    public:
        COMMONAPI_EXPORT RemoteEventHandler(InfoSvcStubDefault *_defaultStub)
            : 
              defaultStub_(_defaultStub) {
        }


    private:
        InfoSvcStubDefault *defaultStub_;
    };
protected:
    InfoSvcStubDefault::RemoteEventHandler remoteEventHandler_;

private:


    CommonAPI::Version interfaceVersion_;
};

} // namespace modem
} // namespace qti
} // namespace qualcomm
} // namespace com
} // namespace v0


// Compatibility
namespace v0_1 = v0;

#endif // V0_COM_QUALCOMM_QTI_MODEM_Info_Svc_STUB_DEFAULT
