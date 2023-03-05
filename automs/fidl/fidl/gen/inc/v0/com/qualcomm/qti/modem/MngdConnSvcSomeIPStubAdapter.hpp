/*
 * This file was generated by the CommonAPI Generators.
 * Used org.genivi.commonapi.someip 3.2.0.v202012010944.
 * Used org.franca.core 0.13.1.201807231814.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
 * If a copy of the MPL was not distributed with this file, You can obtain one at
 * http://mozilla.org/MPL/2.0/.
 */
#ifndef V0_COM_QUALCOMM_QTI_MODEM_MNGD_CONN_SVC_SOMEIP_STUB_ADAPTER_HPP_
#define V0_COM_QUALCOMM_QTI_MODEM_MNGD_CONN_SVC_SOMEIP_STUB_ADAPTER_HPP_

#include <v0/com/qualcomm/qti/modem/MngdConnSvcStub.hpp>
#include <v0/com/qualcomm/qti/modem/MngdConnSvcSomeIPDeployment.hpp>
#include <v0/com/qualcomm/qti/modem/CommonTypesSomeIPDeployment.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#define HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

#include <CommonAPI/SomeIP/AddressTranslator.hpp>
#include <CommonAPI/SomeIP/StubAdapterHelper.hpp>
#include <CommonAPI/SomeIP/StubAdapter.hpp>
#include <CommonAPI/SomeIP/Factory.hpp>
#include <CommonAPI/SomeIP/Types.hpp>
#include <CommonAPI/SomeIP/Constants.hpp>

#if defined (HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE)
#undef COMMONAPI_INTERNAL_COMPILATION
#undef HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

namespace v0 {
namespace com {
namespace qualcomm {
namespace qti {
namespace modem {

template <typename _Stub = ::v0::com::qualcomm::qti::modem::MngdConnSvcStub, typename... _Stubs>
class MngdConnSvcSomeIPStubAdapterInternal
    : public virtual MngdConnSvcStubAdapter,
      public CommonAPI::SomeIP::StubAdapterHelper< _Stub, _Stubs...>,
      public std::enable_shared_from_this< MngdConnSvcSomeIPStubAdapterInternal<_Stub, _Stubs...>>
{
public:
    typedef CommonAPI::SomeIP::StubAdapterHelper< _Stub, _Stubs...> MngdConnSvcSomeIPStubAdapterHelper;

    ~MngdConnSvcSomeIPStubAdapterInternal() {
        deactivateManagedInstances();
        MngdConnSvcSomeIPStubAdapterHelper::deinit();
    }

    void fireDataStateEvent(const std::string &_name, const ::v0::com::qualcomm::qti::modem::MngdConnSvc::DataState &_dataState);

    void deactivateManagedInstances() {}
    
    CommonAPI::SomeIP::GetAttributeStubDispatcher<
        ::v0::com::qualcomm::qti::modem::MngdConnSvcStub,
        CommonAPI::Version
    > getMngdConnSvcInterfaceVersionStubDispatcher;

    CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v0::com::qualcomm::qti::modem::MngdConnSvcStub,
        std::tuple< std::string>,
        std::tuple< ::v0::com::qualcomm::qti::modem::CommonTypes::Result>,
        std::tuple< CommonAPI::SomeIP::StringDeployment>,
        std::tuple< ::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment_t>
    > startDataStubDispatcher;
    
    CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v0::com::qualcomm::qti::modem::MngdConnSvcStub,
        std::tuple< std::string>,
        std::tuple< ::v0::com::qualcomm::qti::modem::CommonTypes::Result>,
        std::tuple< CommonAPI::SomeIP::StringDeployment>,
        std::tuple< ::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment_t>
    > stopDataStubDispatcher;
    
    CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v0::com::qualcomm::qti::modem::MngdConnSvcStub,
        std::tuple< >,
        std::tuple< ::v0::com::qualcomm::qti::modem::CommonTypes::Result, uint8_t, std::vector< std::string >, std::vector< MngdConnSvc::DataState >>,
        std::tuple< >,
        std::tuple< ::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment_t, CommonAPI::SomeIP::IntegerDeployment<uint8_t>, CommonAPI::SomeIP::ArrayDeployment< CommonAPI::SomeIP::StringDeployment >, CommonAPI::SomeIP::ArrayDeployment< ::v0::com::qualcomm::qti::modem::MngdConnSvc_::DataStateDeployment_t >>
    > getDataListStubDispatcher;
    
    CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v0::com::qualcomm::qti::modem::MngdConnSvcStub,
        std::tuple< std::string>,
        std::tuple< ::v0::com::qualcomm::qti::modem::CommonTypes::Result, std::string, MngdConnSvc::DataIpInfo>,
        std::tuple< CommonAPI::SomeIP::StringDeployment>,
        std::tuple< ::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment_t, CommonAPI::SomeIP::StringDeployment, ::v0::com::qualcomm::qti::modem::MngdConnSvc_::DataIpInfoDeployment_t>
    > getDataIpv4InfoStubDispatcher;
    
    MngdConnSvcSomeIPStubAdapterInternal(
        const CommonAPI::SomeIP::Address &_address,
        const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection,
        const std::shared_ptr<CommonAPI::StubBase> &_stub):
        CommonAPI::SomeIP::StubAdapter(_address, _connection),
        MngdConnSvcSomeIPStubAdapterHelper(
            _address,
            _connection,
            std::dynamic_pointer_cast< MngdConnSvcStub>(_stub)),
        getMngdConnSvcInterfaceVersionStubDispatcher(&MngdConnSvcStub::lockInterfaceVersionAttribute, &MngdConnSvcStub::getInterfaceVersion, false, true),
        startDataStubDispatcher(
            &MngdConnSvcStub::StartData,
            false,
            _stub->hasElement(1),
            std::make_tuple(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr)),
            std::make_tuple(&::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment))
        
        ,
        stopDataStubDispatcher(
            &MngdConnSvcStub::StopData,
            false,
            _stub->hasElement(2),
            std::make_tuple(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr)),
            std::make_tuple(&::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment))
        
        ,
        getDataListStubDispatcher(
            &MngdConnSvcStub::GetDataList,
            false,
            _stub->hasElement(3),
            std::make_tuple(),
            std::make_tuple(&::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment, static_cast< CommonAPI::SomeIP::IntegerDeployment<uint8_t>* >(nullptr), static_cast< CommonAPI::SomeIP::ArrayDeployment< CommonAPI::SomeIP::StringDeployment >* >(nullptr), static_cast< CommonAPI::SomeIP::ArrayDeployment< ::v0::com::qualcomm::qti::modem::MngdConnSvc_::DataStateDeployment_t >* >(nullptr)))
        
        ,
        getDataIpv4InfoStubDispatcher(
            &MngdConnSvcStub::GetDataIpv4Info,
            false,
            _stub->hasElement(4),
            std::make_tuple(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr)),
            std::make_tuple(&::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment, static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr), static_cast< ::v0::com::qualcomm::qti::modem::MngdConnSvc_::DataIpInfoDeployment_t* >(nullptr)))
        
    {
        MngdConnSvcSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x1301) }, &startDataStubDispatcher );
        MngdConnSvcSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x1302) }, &stopDataStubDispatcher );
        MngdConnSvcSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x1303) }, &getDataListStubDispatcher );
        MngdConnSvcSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x1304) }, &getDataIpv4InfoStubDispatcher );
        // Provided events/fields
        {
            std::set<CommonAPI::SomeIP::eventgroup_id_t> itsEventGroups;
            itsEventGroups.insert(CommonAPI::SomeIP::eventgroup_id_t(0x9300));
            CommonAPI::SomeIP::StubAdapter::registerEvent(CommonAPI::SomeIP::event_id_t(0x9301), itsEventGroups, CommonAPI::SomeIP::event_type_e::ET_EVENT, CommonAPI::SomeIP::reliability_type_e::RT_UNRELIABLE);
        }
    }

    // Register/Unregister event handlers for selective broadcasts
    void registerSelectiveEventHandlers();
    void unregisterSelectiveEventHandlers();

};

template <typename _Stub, typename... _Stubs>
void MngdConnSvcSomeIPStubAdapterInternal<_Stub, _Stubs...>::fireDataStateEvent(const std::string &_name, const ::v0::com::qualcomm::qti::modem::MngdConnSvc::DataState &_dataState) {
    CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment> deployed_name(_name, static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr));
    CommonAPI::Deployable< MngdConnSvc::DataState, ::v0::com::qualcomm::qti::modem::MngdConnSvc_::DataStateDeployment_t> deployed_dataState(_dataState, static_cast< ::v0::com::qualcomm::qti::modem::MngdConnSvc_::DataStateDeployment_t* >(nullptr));
    CommonAPI::SomeIP::StubEventHelper<CommonAPI::SomeIP::SerializableArguments<  CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment > 
    ,  CommonAPI::Deployable< ::v0::com::qualcomm::qti::modem::MngdConnSvc::DataState, ::v0::com::qualcomm::qti::modem::MngdConnSvc_::DataStateDeployment_t > 
    >>
        ::sendEvent(
            *this,
            CommonAPI::SomeIP::event_id_t(0x9301),
            false,
             deployed_name 
            ,  deployed_dataState 
    );
}


template <typename _Stub, typename... _Stubs>
void MngdConnSvcSomeIPStubAdapterInternal<_Stub, _Stubs...>::registerSelectiveEventHandlers() {
}

template <typename _Stub, typename... _Stubs>
void MngdConnSvcSomeIPStubAdapterInternal<_Stub, _Stubs...>::unregisterSelectiveEventHandlers() {
}

template <typename _Stub = ::v0::com::qualcomm::qti::modem::MngdConnSvcStub, typename... _Stubs>
class MngdConnSvcSomeIPStubAdapter
    : public MngdConnSvcSomeIPStubAdapterInternal<_Stub, _Stubs...> {
public:
    MngdConnSvcSomeIPStubAdapter(const CommonAPI::SomeIP::Address &_address,
                                            const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection,
                                            const std::shared_ptr<CommonAPI::StubBase> &_stub)
        : CommonAPI::SomeIP::StubAdapter(_address, _connection),
          MngdConnSvcSomeIPStubAdapterInternal<_Stub, _Stubs...>(_address, _connection, _stub) {
    }
};

} // namespace modem
} // namespace qti
} // namespace qualcomm
} // namespace com
} // namespace v0

#endif // V0_COM_QUALCOMM_QTI_MODEM_Mngd_Conn_Svc_SOMEIP_STUB_ADAPTER_HPP_