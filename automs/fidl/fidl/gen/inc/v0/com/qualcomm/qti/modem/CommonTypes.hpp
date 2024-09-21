/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.2.0.v202012010850.
* Used org.franca.core 0.13.1.201807231814.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V0_COM_QUALCOMM_QTI_MODEM_Common_Types_HPP_
#define V0_COM_QUALCOMM_QTI_MODEM_Common_Types_HPP_



#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#define HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

#include <CommonAPI/InputStream.hpp>
#include <CommonAPI/OutputStream.hpp>
#include <CommonAPI/Types.hpp>
#include <cstdint>

#if defined (HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE)
#undef COMMONAPI_INTERNAL_COMPILATION
#undef HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

namespace v0 {
namespace com {
namespace qualcomm {
namespace qti {
namespace modem {

struct CommonTypes {
    
    struct Result : CommonAPI::Enumeration< uint32_t> {
        enum Literal : uint32_t {
            OK = 0,
            NOT_FOUND = 1,
            OUT_OF_RANGE = 2,
            NO_MEMORY = 3,
            NOT_PERMITTED = 4,
            FAULT = 5,
            COMM_ERROR = 6,
            TIMEOUT = 7,
            OVERFLOW = 8,
            UNDERFLOW = 9,
            WOULD_BLOCK = 10,
            DEADLOCK = 11,
            FORMAT_ERROR = 12,
            DUPLICATE = 13,
            BAD_PARAMETER = 14,
            CLOSED = 15,
            BUSY = 16,
            UNSUPPORTED = 17,
            IO_ERROR = 18,
            NOT_IMPLEMENTED = 19,
            UNAVAILABLE = 20,
            TERMINATED = 21,
            IN_PROGRESS = 22,
            SUSPENDED = 23
        };
    
        Result()
            : CommonAPI::Enumeration< uint32_t>(static_cast< uint32_t>(Literal::OK)) {}
        Result(Literal _literal)
            : CommonAPI::Enumeration< uint32_t>(static_cast< uint32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast< uint32_t>(Literal::OK):
                case static_cast< uint32_t>(Literal::NOT_FOUND):
                case static_cast< uint32_t>(Literal::OUT_OF_RANGE):
                case static_cast< uint32_t>(Literal::NO_MEMORY):
                case static_cast< uint32_t>(Literal::NOT_PERMITTED):
                case static_cast< uint32_t>(Literal::FAULT):
                case static_cast< uint32_t>(Literal::COMM_ERROR):
                case static_cast< uint32_t>(Literal::TIMEOUT):
                case static_cast< uint32_t>(Literal::OVERFLOW):
                case static_cast< uint32_t>(Literal::UNDERFLOW):
                case static_cast< uint32_t>(Literal::WOULD_BLOCK):
                case static_cast< uint32_t>(Literal::DEADLOCK):
                case static_cast< uint32_t>(Literal::FORMAT_ERROR):
                case static_cast< uint32_t>(Literal::DUPLICATE):
                case static_cast< uint32_t>(Literal::BAD_PARAMETER):
                case static_cast< uint32_t>(Literal::CLOSED):
                case static_cast< uint32_t>(Literal::BUSY):
                case static_cast< uint32_t>(Literal::UNSUPPORTED):
                case static_cast< uint32_t>(Literal::IO_ERROR):
                case static_cast< uint32_t>(Literal::NOT_IMPLEMENTED):
                case static_cast< uint32_t>(Literal::UNAVAILABLE):
                case static_cast< uint32_t>(Literal::TERMINATED):
                case static_cast< uint32_t>(Literal::IN_PROGRESS):
                case static_cast< uint32_t>(Literal::SUSPENDED):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const Result &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const Result &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const Result &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const Result &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const Result &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const Result &_other) const { return (value_ > _other.value_); }
    
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast< uint32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast< uint32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast< uint32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast< uint32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast< uint32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast< uint32_t>(_value)); }
    
        const char* toString() const noexcept
        {
            switch(value_)
            {
            case static_cast< uint32_t>(Literal::OK): return "OK";
            case static_cast< uint32_t>(Literal::NOT_FOUND): return "NOT_FOUND";
            case static_cast< uint32_t>(Literal::OUT_OF_RANGE): return "OUT_OF_RANGE";
            case static_cast< uint32_t>(Literal::NO_MEMORY): return "NO_MEMORY";
            case static_cast< uint32_t>(Literal::NOT_PERMITTED): return "NOT_PERMITTED";
            case static_cast< uint32_t>(Literal::FAULT): return "FAULT";
            case static_cast< uint32_t>(Literal::COMM_ERROR): return "COMM_ERROR";
            case static_cast< uint32_t>(Literal::TIMEOUT): return "TIMEOUT";
            case static_cast< uint32_t>(Literal::OVERFLOW): return "OVERFLOW";
            case static_cast< uint32_t>(Literal::UNDERFLOW): return "UNDERFLOW";
            case static_cast< uint32_t>(Literal::WOULD_BLOCK): return "WOULD_BLOCK";
            case static_cast< uint32_t>(Literal::DEADLOCK): return "DEADLOCK";
            case static_cast< uint32_t>(Literal::FORMAT_ERROR): return "FORMAT_ERROR";
            case static_cast< uint32_t>(Literal::DUPLICATE): return "DUPLICATE";
            case static_cast< uint32_t>(Literal::BAD_PARAMETER): return "BAD_PARAMETER";
            case static_cast< uint32_t>(Literal::CLOSED): return "CLOSED";
            case static_cast< uint32_t>(Literal::BUSY): return "BUSY";
            case static_cast< uint32_t>(Literal::UNSUPPORTED): return "UNSUPPORTED";
            case static_cast< uint32_t>(Literal::IO_ERROR): return "IO_ERROR";
            case static_cast< uint32_t>(Literal::NOT_IMPLEMENTED): return "NOT_IMPLEMENTED";
            case static_cast< uint32_t>(Literal::UNAVAILABLE): return "UNAVAILABLE";
            case static_cast< uint32_t>(Literal::TERMINATED): return "TERMINATED";
            case static_cast< uint32_t>(Literal::IN_PROGRESS): return "IN_PROGRESS";
            case static_cast< uint32_t>(Literal::SUSPENDED): return "SUSPENDED";
            default: return "UNDEFINED";
            }
        }
    };
    
    struct OnOffType : CommonAPI::Enumeration< uint32_t> {
        enum Literal : uint32_t {
            OFF = 0,
            ON = 1
        };
    
        OnOffType()
            : CommonAPI::Enumeration< uint32_t>(static_cast< uint32_t>(Literal::OFF)) {}
        OnOffType(Literal _literal)
            : CommonAPI::Enumeration< uint32_t>(static_cast< uint32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast< uint32_t>(Literal::OFF):
                case static_cast< uint32_t>(Literal::ON):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const OnOffType &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const OnOffType &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const OnOffType &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const OnOffType &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const OnOffType &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const OnOffType &_other) const { return (value_ > _other.value_); }
    
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast< uint32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast< uint32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast< uint32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast< uint32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast< uint32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast< uint32_t>(_value)); }
    
        const char* toString() const noexcept
        {
            switch(value_)
            {
            case static_cast< uint32_t>(Literal::OFF): return "OFF";
            case static_cast< uint32_t>(Literal::ON): return "ON";
            default: return "UNDEFINED";
            }
        }
    };
    
    struct PhoneId : CommonAPI::Enumeration< uint32_t> {
        enum Literal : uint32_t {
            PHONE_ID_1 = 1,
            PHONE_ID_2 = 2
        };
    
        PhoneId()
            : CommonAPI::Enumeration< uint32_t>(static_cast< uint32_t>(Literal::PHONE_ID_1)) {}
        PhoneId(Literal _literal)
            : CommonAPI::Enumeration< uint32_t>(static_cast< uint32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast< uint32_t>(Literal::PHONE_ID_1):
                case static_cast< uint32_t>(Literal::PHONE_ID_2):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const PhoneId &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const PhoneId &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const PhoneId &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const PhoneId &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const PhoneId &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const PhoneId &_other) const { return (value_ > _other.value_); }
    
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast< uint32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast< uint32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast< uint32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast< uint32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast< uint32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast< uint32_t>(_value)); }
    
        const char* toString() const noexcept
        {
            switch(value_)
            {
            case static_cast< uint32_t>(Literal::PHONE_ID_1): return "PHONE_ID_1";
            case static_cast< uint32_t>(Literal::PHONE_ID_2): return "PHONE_ID_2";
            default: return "UNDEFINED";
            }
        }
    };


static inline const char* getTypeCollectionName() {
    static const char* typeCollectionName = "com.qualcomm.qti.modem.CommonTypes";
    return typeCollectionName;
}

inline CommonAPI::Version getTypeCollectionVersion() {
    return CommonAPI::Version(0, 1);
}

}; // struct CommonTypes

} // namespace modem
} // namespace qti
} // namespace qualcomm
} // namespace com
} // namespace v0

namespace CommonAPI {
}


namespace std {
    //Hash for Result
    template<>
    struct hash< ::v0::com::qualcomm::qti::modem::CommonTypes::Result> {
        inline size_t operator()(const ::v0::com::qualcomm::qti::modem::CommonTypes::Result& result) const {
            return static_cast< uint32_t>(result);
        }
    };
    //Hash for OnOffType
    template<>
    struct hash< ::v0::com::qualcomm::qti::modem::CommonTypes::OnOffType> {
        inline size_t operator()(const ::v0::com::qualcomm::qti::modem::CommonTypes::OnOffType& onOffType) const {
            return static_cast< uint32_t>(onOffType);
        }
    };
    //Hash for PhoneId
    template<>
    struct hash< ::v0::com::qualcomm::qti::modem::CommonTypes::PhoneId> {
        inline size_t operator()(const ::v0::com::qualcomm::qti::modem::CommonTypes::PhoneId& phoneId) const {
            return static_cast< uint32_t>(phoneId);
        }
    };
}


// Compatibility
namespace v0_1 = v0;

#endif // V0_COM_QUALCOMM_QTI_MODEM_Common_Types_HPP_