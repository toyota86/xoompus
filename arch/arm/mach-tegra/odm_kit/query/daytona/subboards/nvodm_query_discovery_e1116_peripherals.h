/*
 * Copyright (c) 2009 NVIDIA Corporation.  All rights reserved.
 *
 * NVIDIA Corporation and its licensors retain all intellectual property
 * and proprietary rights in and to this software, related documentation
 * and any modifications thereto.  Any use, reproduction, disclosure or
 * distribution of this software and related documentation without an express
 * license agreement from NVIDIA Corporation is strictly prohibited.
 */

/**
 * @file
 * <b>NVIDIA APX ODM Kit::
 *         Implementation of the ODM Peripheral Discovery API</b>
 *
 * @b Description: Specifies the peripheral connectivity 
 *                 database Peripheral entries for the E1116
 *                 power module.
 */

/*  All of the reserved values, for SOC voltage domains.
 */

// WHISTLER_AP16_ONLY - AP20 doesn't have PLL_D rail.
// PLLD (NV reserved) / Use PLL_U
{
    NV_VDD_PLLD_ODM_ID,
    s_ffaPllUAddresses,
    NV_ARRAY_SIZE(s_ffaPllUAddresses),
    NvOdmPeripheralClass_Other
},
// -------- END WHISTLER_AP16_ONLY -------- 


// RTC (NV reserved)
{
    NV_VDD_RTC_ODM_ID,
    s_ffaRtcAddresses,
    NV_ARRAY_SIZE(s_ffaRtcAddresses),
    NvOdmPeripheralClass_Other
},

// CORE (NV reserved)
{
    NV_VDD_CORE_ODM_ID,
    s_ffaCoreAddresses,
    NV_ARRAY_SIZE(s_ffaCoreAddresses),
    NvOdmPeripheralClass_Other
},

// CPU (NV reserved)
{
    NV_VDD_CPU_ODM_ID,
    s_ffaCpuAddresses,
    NV_ARRAY_SIZE(s_ffaCpuAddresses),
    NvOdmPeripheralClass_Other
},

// PLLA (NV reserved)
{
    NV_VDD_PLLA_ODM_ID,
    s_ffaPllAAddresses,
    NV_ARRAY_SIZE(s_ffaPllAAddresses),
    NvOdmPeripheralClass_Other
},

// PLLM (NV reserved)
{
    NV_VDD_PLLM_ODM_ID,
    s_ffaPllMAddresses,
    NV_ARRAY_SIZE(s_ffaPllMAddresses),
    NvOdmPeripheralClass_Other
},

// PLLP (NV reserved)
{
    NV_VDD_PLLP_ODM_ID,
    s_ffaPllPAddresses,
    NV_ARRAY_SIZE(s_ffaPllPAddresses),
    NvOdmPeripheralClass_Other
},

// PLLC (NV reserved)
{
    NV_VDD_PLLC_ODM_ID,
    s_ffaPllCAddresses,
    NV_ARRAY_SIZE(s_ffaPllCAddresses),
    NvOdmPeripheralClass_Other
},

// PLLE (NV reserved)
{
    NV_VDD_PLLE_ODM_ID,
    s_ffaPllEAddresses,
    NV_ARRAY_SIZE(s_ffaPllEAddresses),
    NvOdmPeripheralClass_Other
},

// PLLUsb (NV reserved)
{
    NV_VDD_PLLU_ODM_ID,
    s_ffaPllUsbAddresses,
    NV_ARRAY_SIZE(s_ffaPllUsbAddresses),
    NvOdmPeripheralClass_Other
},

// PLLU (NV reserved)
{
    NV_VDD_PLLU1_ODM_ID,
    s_ffaPllUAddresses,
    NV_ARRAY_SIZE(s_ffaPllUAddresses),
    NvOdmPeripheralClass_Other
},

// PLLS (NV reserved)
{
    NV_VDD_PLLS_ODM_ID,
    s_ffaPllSAddresses,
    NV_ARRAY_SIZE(s_ffaPllSAddresses),
    NvOdmPeripheralClass_Other
},

// HDMI PLL (NV reserved)
{
    NV_VDD_PLLHDMI_ODM_ID,
    s_ffaPllHdmiAddresses,
    NV_ARRAY_SIZE(s_ffaPllHdmiAddresses),
    NvOdmPeripheralClass_Other
},

// OSC VDD (NV reserved)
{
    NV_VDD_OSC_ODM_ID,
    s_ffaVddOscAddresses,
    NV_ARRAY_SIZE(s_ffaVddOscAddresses),
    NvOdmPeripheralClass_Other
},

// PLLX (NV reserved)
{
    NV_VDD_PLLX_ODM_ID,
    s_ffaPllXAddresses,
    NV_ARRAY_SIZE(s_ffaPllXAddresses),
    NvOdmPeripheralClass_Other
},

// PLL_USB (NV reserved)
{
    NV_VDD_PLL_USB_ODM_ID,
    s_ffaPllUsbAddresses,
    NV_ARRAY_SIZE(s_ffaPllUsbAddresses),
    NvOdmPeripheralClass_Other
},

// (TBD) PLL_PEX (NV reserved)

// System IO VDD (NV reserved)
{
    NV_VDD_SYS_ODM_ID,
    s_ffaVddSysAddresses,
    NV_ARRAY_SIZE(s_ffaVddSysAddresses),
    NvOdmPeripheralClass_Other
},

// USB VDD (NV reserved)
{
    NV_VDD_USB_ODM_ID,
    s_ffaVddUsbAddresses,
    NV_ARRAY_SIZE(s_ffaVddUsbAddresses),
    NvOdmPeripheralClass_Other
},

//  VBUS for USB1
{
    NV_VDD_VBUS_ODM_ID,
    s_ffaVddUsb1VBusAddresses,
    NV_ARRAY_SIZE(s_ffaVddUsb1VBusAddresses),
    NvOdmPeripheralClass_Other
},

// HDMI VDD (NV reserved)
{
    NV_VDD_HDMI_ODM_ID,
    s_ffaVddHdmiAddresses,
    NV_ARRAY_SIZE(s_ffaVddHdmiAddresses),
    NvOdmPeripheralClass_Other
},

// MIPI VDD (NV reserved)
{
    NV_VDD_MIPI_ODM_ID,
    s_ffaVddMipiAddresses,
    NV_ARRAY_SIZE(s_ffaVddMipiAddresses),
    NvOdmPeripheralClass_Other
},

// LCD VDD (NV reserved)
{
    NV_VDD_LCD_ODM_ID,
    s_ffaVddLcdAddresses,
    NV_ARRAY_SIZE(s_ffaVddLcdAddresses),
    NvOdmPeripheralClass_Other
},

// AUDIO VDD (NV reserved)
{
    NV_VDD_AUD_ODM_ID,
    s_ffaVddAudAddresses,
    NV_ARRAY_SIZE(s_ffaVddAudAddresses),
    NvOdmPeripheralClass_Other
},

// DDR VDD (NV reserved)
{
    NV_VDD_DDR_ODM_ID,
    s_ffaVddDdrAddresses,
    NV_ARRAY_SIZE(s_ffaVddDdrAddresses),
    NvOdmPeripheralClass_Other
},

// DDR_RX (NV reserved)
{
    NV_VDD_DDR_RX_ODM_ID,
    s_ffaVddDdrRxAddresses,
    NV_ARRAY_SIZE(s_ffaVddDdrRxAddresses),
    NvOdmPeripheralClass_Other
},

// NAND VDD (NV reserved)
{
    NV_VDD_NAND_ODM_ID,
    s_ffaVddNandAddresses,
    NV_ARRAY_SIZE(s_ffaVddNandAddresses),
    NvOdmPeripheralClass_Other
},

// UART VDD (NV reserved)
{
    NV_VDD_UART_ODM_ID,
    s_ffaVddUartAddresses,
    NV_ARRAY_SIZE(s_ffaVddUartAddresses),
    NvOdmPeripheralClass_Other
},

// SDIO VDD (NV reserved)
{
    NV_VDD_SDIO_ODM_ID,
    s_ffaVddSdioAddresses,
    NV_ARRAY_SIZE(s_ffaVddSdioAddresses),
    NvOdmPeripheralClass_Other
},

// VDAC VDD (NV reserved)
{
    NV_VDD_VDAC_ODM_ID,
    s_ffaVddVdacAddresses,
    NV_ARRAY_SIZE(s_ffaVddVdacAddresses),
    NvOdmPeripheralClass_Other
},

// VI VDD (NV reserved)
{
    NV_VDD_VI_ODM_ID,
    s_ffaVddViAddresses,
    NV_ARRAY_SIZE(s_ffaVddViAddresses),
    NvOdmPeripheralClass_Other
},

// BB VDD (NV reserved)
{
    NV_VDD_BB_ODM_ID,
    s_ffaVddBbAddresses,
    NV_ARRAY_SIZE(s_ffaVddBbAddresses),
    NvOdmPeripheralClass_Other
},

// (TBD) PEX (NV reserved)

// PEX_CLK (NV reserved)
{
    NV_VDD_PEX_CLK_ODM_ID,
    s_ffaVddPexClkAddresses,
    NV_ARRAY_SIZE(s_ffaVddPexClkAddresses),
    NvOdmPeripheralClass_Other
},

//  PMU0
{
    NV_ODM_GUID('n','u','l','l','_','p','m','u'),
    s_Pmu0Addresses,
    NV_ARRAY_SIZE(s_Pmu0Addresses),
    NvOdmPeripheralClass_Other
},
// NOTE: This list *must* end with a trailing comma.
