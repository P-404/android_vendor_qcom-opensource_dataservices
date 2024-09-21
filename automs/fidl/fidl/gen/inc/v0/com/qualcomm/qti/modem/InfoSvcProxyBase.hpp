/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.2.0.v202012010850.
* Used org.franca.core 0.13.1.201807231814.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V0_COM_QUALCOMM_QTI_MODEM_Info_Svc_PROXY_BASE_HPP_
#define V0_COM_QUALCOMM_QTI_MODEM_Info_Svc_PROXY_BASE_HPP_

#include <v0/com/qualcomm/qti/modem/InfoSvc.hpp>


#include <v0/com/qualcomm/qti/modem/CommonTypes.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#define HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

#include <CommonAPI/InputStream.hpp>
#include <CommonAPI/OutputStream.hpp>
#include <cstdint>
#include <vector>

#include <CommonAPI/Proxy.hpp>
#include <functional>
#include <future>

#if defined (HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE)
#undef COMMONAPI_INTERNAL_COMPILATION
#undef HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

namespace v0 {
namespace com {
namespace qualcomm {
namespace qti {
namespace modem {

class InfoSvcProxyBase
    : virtual public CommonAPI::Proxy {
public:

    typedef std::function<void(const CommonAPI::CallStatus&, const ::v0::com::qualcomm::qti::modem::CommonTypes::Result&, const std::string&)> GetImeiAsyncCallback;

    /*
     * description: 
     * Retrieves the International Mobile Equipment Identity (IMEI).
     */
    virtual void GetImei(CommonAPI::CallStatus &_internalCallStatus, ::v0::com::qualcomm::qti::modem::CommonTypes::Result &_error, std::string &_imei, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> GetImeiAsync(GetImeiAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;

    virtual std::future<void> getCompletionFuture() = 0;
};

} // namespace modem
} // namespace qti
} // namespace qualcomm
} // namespace com
} // namespace v0


// Compatibility
namespace v0_1 = v0;

#endif // V0_COM_QUALCOMM_QTI_MODEM_Info_Svc_PROXY_BASE_HPP_