/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.2.0.v202012010850.
* Used org.franca.core 0.13.1.201807231814.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V0_COM_QUALCOMM_QTI_MODEM_MNGD_CONN_SVC_HPP_
#define V0_COM_QUALCOMM_QTI_MODEM_MNGD_CONN_SVC_HPP_




#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#define HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

#include <CommonAPI/Deployment.hpp>
#include <CommonAPI/InputStream.hpp>
#include <CommonAPI/OutputStream.hpp>
#include <CommonAPI/Struct.hpp>
#include <CommonAPI/Types.hpp>
#include <cstdint>
#include <string>

#if defined (HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE)
#undef COMMONAPI_INTERNAL_COMPILATION
#undef HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

namespace v0 {
namespace com {
namespace qualcomm {
namespace qti {
namespace modem {

class MngdConnSvc {
public:
    virtual ~MngdConnSvc() { }

    static inline const char* getInterface();
    static inline CommonAPI::Version getInterfaceVersion();
    
    struct DataState : CommonAPI::Enumeration< uint8_t> {
        enum Literal : uint8_t {
            DATA_DISCONNECTED = 0,
            DATA_CONNECTED = 1,
            DATA_CONNECTION_FAILED = 2,
            DATA_CONNECTION_STALLED = 3
        };
    
        DataState()
            : CommonAPI::Enumeration< uint8_t>(static_cast< uint8_t>(Literal::DATA_DISCONNECTED)) {}
        DataState(Literal _literal)
            : CommonAPI::Enumeration< uint8_t>(static_cast< uint8_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast< uint8_t>(Literal::DATA_DISCONNECTED):
                case static_cast< uint8_t>(Literal::DATA_CONNECTED):
                case static_cast< uint8_t>(Literal::DATA_CONNECTION_FAILED):
                case static_cast< uint8_t>(Literal::DATA_CONNECTION_STALLED):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const DataState &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const DataState &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const DataState &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const DataState &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const DataState &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const DataState &_other) const { return (value_ > _other.value_); }
    
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast< uint8_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast< uint8_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast< uint8_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast< uint8_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast< uint8_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast< uint8_t>(_value)); }
    
        const char* toString() const noexcept
        {
            switch(value_)
            {
            case static_cast< uint8_t>(Literal::DATA_DISCONNECTED): return "DATA_DISCONNECTED";
            case static_cast< uint8_t>(Literal::DATA_CONNECTED): return "DATA_CONNECTED";
            case static_cast< uint8_t>(Literal::DATA_CONNECTION_FAILED): return "DATA_CONNECTION_FAILED";
            case static_cast< uint8_t>(Literal::DATA_CONNECTION_STALLED): return "DATA_CONNECTION_STALLED";
            default: return "UNDEFINED";
            }
        }
    };
    struct DataIpInfo : CommonAPI::Struct< std::string, std::string, std::string, std::string, uint32_t> {
    
        DataIpInfo()
        {
            std::get< 0>(values_) = "";
            std::get< 1>(values_) = "";
            std::get< 2>(values_) = "";
            std::get< 3>(values_) = "";
            std::get< 4>(values_) = 0ul;
        }
        DataIpInfo(const std::string &_ipAddr, const std::string &_gatewayAddr, const std::string &_dns1Addr, const std::string &_dns2Addr, const uint32_t &_ipMask)
        {
            std::get< 0>(values_) = _ipAddr;
            std::get< 1>(values_) = _gatewayAddr;
            std::get< 2>(values_) = _dns1Addr;
            std::get< 3>(values_) = _dns2Addr;
            std::get< 4>(values_) = _ipMask;
        }
        inline const std::string &getIpAddr() const { return std::get< 0>(values_); }
        inline void setIpAddr(const std::string &_value) { std::get< 0>(values_) = _value; }
        inline const std::string &getGatewayAddr() const { return std::get< 1>(values_); }
        inline void setGatewayAddr(const std::string &_value) { std::get< 1>(values_) = _value; }
        inline const std::string &getDns1Addr() const { return std::get< 2>(values_); }
        inline void setDns1Addr(const std::string &_value) { std::get< 2>(values_) = _value; }
        inline const std::string &getDns2Addr() const { return std::get< 3>(values_); }
        inline void setDns2Addr(const std::string &_value) { std::get< 3>(values_) = _value; }
        inline const uint32_t &getIpMask() const { return std::get< 4>(values_); }
        inline void setIpMask(const uint32_t &_value) { std::get< 4>(values_) = _value; }
        inline bool operator==(const DataIpInfo& _other) const {
        return (getIpAddr() == _other.getIpAddr() && getGatewayAddr() == _other.getGatewayAddr() && getDns1Addr() == _other.getDns1Addr() && getDns2Addr() == _other.getDns2Addr() && getIpMask() == _other.getIpMask());
        }
        inline bool operator!=(const DataIpInfo &_other) const {
            return !((*this) == _other);
        }
    
    };
    const uint8_t MAX_DATA_NUM = 4;
};

const char* MngdConnSvc::getInterface() {
    return ("com.qualcomm.qti.modem.MngdConnSvc:v0_1");
}

CommonAPI::Version MngdConnSvc::getInterfaceVersion() {
    return CommonAPI::Version(0, 1);
}


} // namespace modem
} // namespace qti
} // namespace qualcomm
} // namespace com
} // namespace v0

namespace CommonAPI {
}


// Compatibility
namespace v0_1 = v0;

#endif // V0_COM_QUALCOMM_QTI_MODEM_MNGD_CONN_SVC_HPP_