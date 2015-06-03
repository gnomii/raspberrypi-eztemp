#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include <cydevice_trm.h>

/* EN */
#define EN__0__DM__MASK 0xE00000u
#define EN__0__DM__SHIFT 21
#define EN__0__DR CYREG_PRT2_DR
#define EN__0__HSIOM CYREG_HSIOM_PORT_SEL2
#define EN__0__HSIOM_MASK 0xF0000000u
#define EN__0__HSIOM_SHIFT 28u
#define EN__0__INTCFG CYREG_PRT2_INTCFG
#define EN__0__INTSTAT CYREG_PRT2_INTSTAT
#define EN__0__MASK 0x80u
#define EN__0__PA__CFG0 CYREG_UDB_PA2_CFG0
#define EN__0__PA__CFG1 CYREG_UDB_PA2_CFG1
#define EN__0__PA__CFG10 CYREG_UDB_PA2_CFG10
#define EN__0__PA__CFG11 CYREG_UDB_PA2_CFG11
#define EN__0__PA__CFG12 CYREG_UDB_PA2_CFG12
#define EN__0__PA__CFG13 CYREG_UDB_PA2_CFG13
#define EN__0__PA__CFG14 CYREG_UDB_PA2_CFG14
#define EN__0__PA__CFG2 CYREG_UDB_PA2_CFG2
#define EN__0__PA__CFG3 CYREG_UDB_PA2_CFG3
#define EN__0__PA__CFG4 CYREG_UDB_PA2_CFG4
#define EN__0__PA__CFG5 CYREG_UDB_PA2_CFG5
#define EN__0__PA__CFG6 CYREG_UDB_PA2_CFG6
#define EN__0__PA__CFG7 CYREG_UDB_PA2_CFG7
#define EN__0__PA__CFG8 CYREG_UDB_PA2_CFG8
#define EN__0__PA__CFG9 CYREG_UDB_PA2_CFG9
#define EN__0__PC CYREG_PRT2_PC
#define EN__0__PC2 CYREG_PRT2_PC2
#define EN__0__PORT 2u
#define EN__0__PS CYREG_PRT2_PS
#define EN__0__SHIFT 7
#define EN__DR CYREG_PRT2_DR
#define EN__INTCFG CYREG_PRT2_INTCFG
#define EN__INTSTAT CYREG_PRT2_INTSTAT
#define EN__MASK 0x80u
#define EN__PA__CFG0 CYREG_UDB_PA2_CFG0
#define EN__PA__CFG1 CYREG_UDB_PA2_CFG1
#define EN__PA__CFG10 CYREG_UDB_PA2_CFG10
#define EN__PA__CFG11 CYREG_UDB_PA2_CFG11
#define EN__PA__CFG12 CYREG_UDB_PA2_CFG12
#define EN__PA__CFG13 CYREG_UDB_PA2_CFG13
#define EN__PA__CFG14 CYREG_UDB_PA2_CFG14
#define EN__PA__CFG2 CYREG_UDB_PA2_CFG2
#define EN__PA__CFG3 CYREG_UDB_PA2_CFG3
#define EN__PA__CFG4 CYREG_UDB_PA2_CFG4
#define EN__PA__CFG5 CYREG_UDB_PA2_CFG5
#define EN__PA__CFG6 CYREG_UDB_PA2_CFG6
#define EN__PA__CFG7 CYREG_UDB_PA2_CFG7
#define EN__PA__CFG8 CYREG_UDB_PA2_CFG8
#define EN__PA__CFG9 CYREG_UDB_PA2_CFG9
#define EN__PC CYREG_PRT2_PC
#define EN__PC2 CYREG_PRT2_PC2
#define EN__PORT 2u
#define EN__PS CYREG_PRT2_PS
#define EN__SHIFT 7

/* ADC_Bypass */
#define ADC_Bypass__0__DM__MASK 0xE00000u
#define ADC_Bypass__0__DM__SHIFT 21
#define ADC_Bypass__0__DR CYREG_PRT1_DR
#define ADC_Bypass__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define ADC_Bypass__0__HSIOM_MASK 0xF0000000u
#define ADC_Bypass__0__HSIOM_SHIFT 28u
#define ADC_Bypass__0__INTCFG CYREG_PRT1_INTCFG
#define ADC_Bypass__0__INTSTAT CYREG_PRT1_INTSTAT
#define ADC_Bypass__0__MASK 0x80u
#define ADC_Bypass__0__PA__CFG0 CYREG_UDB_PA1_CFG0
#define ADC_Bypass__0__PA__CFG1 CYREG_UDB_PA1_CFG1
#define ADC_Bypass__0__PA__CFG10 CYREG_UDB_PA1_CFG10
#define ADC_Bypass__0__PA__CFG11 CYREG_UDB_PA1_CFG11
#define ADC_Bypass__0__PA__CFG12 CYREG_UDB_PA1_CFG12
#define ADC_Bypass__0__PA__CFG13 CYREG_UDB_PA1_CFG13
#define ADC_Bypass__0__PA__CFG14 CYREG_UDB_PA1_CFG14
#define ADC_Bypass__0__PA__CFG2 CYREG_UDB_PA1_CFG2
#define ADC_Bypass__0__PA__CFG3 CYREG_UDB_PA1_CFG3
#define ADC_Bypass__0__PA__CFG4 CYREG_UDB_PA1_CFG4
#define ADC_Bypass__0__PA__CFG5 CYREG_UDB_PA1_CFG5
#define ADC_Bypass__0__PA__CFG6 CYREG_UDB_PA1_CFG6
#define ADC_Bypass__0__PA__CFG7 CYREG_UDB_PA1_CFG7
#define ADC_Bypass__0__PA__CFG8 CYREG_UDB_PA1_CFG8
#define ADC_Bypass__0__PA__CFG9 CYREG_UDB_PA1_CFG9
#define ADC_Bypass__0__PC CYREG_PRT1_PC
#define ADC_Bypass__0__PC2 CYREG_PRT1_PC2
#define ADC_Bypass__0__PORT 1u
#define ADC_Bypass__0__PS CYREG_PRT1_PS
#define ADC_Bypass__0__SHIFT 7
#define ADC_Bypass__DR CYREG_PRT1_DR
#define ADC_Bypass__INTCFG CYREG_PRT1_INTCFG
#define ADC_Bypass__INTSTAT CYREG_PRT1_INTSTAT
#define ADC_Bypass__MASK 0x80u
#define ADC_Bypass__PA__CFG0 CYREG_UDB_PA1_CFG0
#define ADC_Bypass__PA__CFG1 CYREG_UDB_PA1_CFG1
#define ADC_Bypass__PA__CFG10 CYREG_UDB_PA1_CFG10
#define ADC_Bypass__PA__CFG11 CYREG_UDB_PA1_CFG11
#define ADC_Bypass__PA__CFG12 CYREG_UDB_PA1_CFG12
#define ADC_Bypass__PA__CFG13 CYREG_UDB_PA1_CFG13
#define ADC_Bypass__PA__CFG14 CYREG_UDB_PA1_CFG14
#define ADC_Bypass__PA__CFG2 CYREG_UDB_PA1_CFG2
#define ADC_Bypass__PA__CFG3 CYREG_UDB_PA1_CFG3
#define ADC_Bypass__PA__CFG4 CYREG_UDB_PA1_CFG4
#define ADC_Bypass__PA__CFG5 CYREG_UDB_PA1_CFG5
#define ADC_Bypass__PA__CFG6 CYREG_UDB_PA1_CFG6
#define ADC_Bypass__PA__CFG7 CYREG_UDB_PA1_CFG7
#define ADC_Bypass__PA__CFG8 CYREG_UDB_PA1_CFG8
#define ADC_Bypass__PA__CFG9 CYREG_UDB_PA1_CFG9
#define ADC_Bypass__PC CYREG_PRT1_PC
#define ADC_Bypass__PC2 CYREG_PRT1_PC2
#define ADC_Bypass__PORT 1u
#define ADC_Bypass__PS CYREG_PRT1_PS
#define ADC_Bypass__SHIFT 7

/* ADC_cy_psoc4_sar */
#define ADC_cy_psoc4_sar__SAR_CTRL CYREG_SAR_CTRL
#define ADC_cy_psoc4_sar__SAR_INTR CYREG_SAR_INTR
#define ADC_cy_psoc4_sar__SAR_INTR_CAUSE CYREG_SAR_INTR_CAUSE
#define ADC_cy_psoc4_sar__SAR_INTR_MASK CYREG_SAR_INTR_MASK
#define ADC_cy_psoc4_sar__SAR_INTR_MASKED CYREG_SAR_INTR_MASKED
#define ADC_cy_psoc4_sar__SAR_INTR_SET CYREG_SAR_INTR_SET
#define ADC_cy_psoc4_sar__SAR_NUMBER 0u
#define ADC_cy_psoc4_sar__SAR_RANGE_COND CYREG_SAR_RANGE_COND
#define ADC_cy_psoc4_sar__SAR_RANGE_INTR_MASK CYREG_SAR_RANGE_INTR_MASK
#define ADC_cy_psoc4_sar__SAR_RANGE_INTR_MASKED CYREG_SAR_RANGE_INTR_MASKED
#define ADC_cy_psoc4_sar__SAR_RANGE_INTR_SET CYREG_SAR_RANGE_INTR_SET
#define ADC_cy_psoc4_sar__SAR_RANGE_THRES CYREG_SAR_RANGE_THRES
#define ADC_cy_psoc4_sar__SAR_SAMPLE_CTRL CYREG_SAR_SAMPLE_CTRL
#define ADC_cy_psoc4_sar__SAR_SAMPLE_TIME01 CYREG_SAR_SAMPLE_TIME01
#define ADC_cy_psoc4_sar__SAR_SAMPLE_TIME23 CYREG_SAR_SAMPLE_TIME23
#define ADC_cy_psoc4_sar__SAR_SATURATE_INTR_MASK CYREG_SAR_SATURATE_INTR_MASK
#define ADC_cy_psoc4_sar__SAR_SATURATE_INTR_MASKED CYREG_SAR_SATURATE_INTR_MASKED
#define ADC_cy_psoc4_sar__SAR_SATURATE_INTR_SET CYREG_SAR_SATURATE_INTR_SET
#define ADC_cy_psoc4_sar__SAR_STATUS CYREG_SAR_STATUS

/* ADC_IN */
#define ADC_IN__0__DM__MASK 0x07u
#define ADC_IN__0__DM__SHIFT 0
#define ADC_IN__0__DR CYREG_PRT1_DR
#define ADC_IN__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define ADC_IN__0__HSIOM_MASK 0x0000000Fu
#define ADC_IN__0__HSIOM_SHIFT 0u
#define ADC_IN__0__INTCFG CYREG_PRT1_INTCFG
#define ADC_IN__0__INTSTAT CYREG_PRT1_INTSTAT
#define ADC_IN__0__MASK 0x01u
#define ADC_IN__0__OUT_SEL CYREG_UDB_PA1_CFG10
#define ADC_IN__0__OUT_SEL_SHIFT 0u
#define ADC_IN__0__OUT_SEL_VAL 3u
#define ADC_IN__0__PA__CFG0 CYREG_UDB_PA1_CFG0
#define ADC_IN__0__PA__CFG1 CYREG_UDB_PA1_CFG1
#define ADC_IN__0__PA__CFG10 CYREG_UDB_PA1_CFG10
#define ADC_IN__0__PA__CFG11 CYREG_UDB_PA1_CFG11
#define ADC_IN__0__PA__CFG12 CYREG_UDB_PA1_CFG12
#define ADC_IN__0__PA__CFG13 CYREG_UDB_PA1_CFG13
#define ADC_IN__0__PA__CFG14 CYREG_UDB_PA1_CFG14
#define ADC_IN__0__PA__CFG2 CYREG_UDB_PA1_CFG2
#define ADC_IN__0__PA__CFG3 CYREG_UDB_PA1_CFG3
#define ADC_IN__0__PA__CFG4 CYREG_UDB_PA1_CFG4
#define ADC_IN__0__PA__CFG5 CYREG_UDB_PA1_CFG5
#define ADC_IN__0__PA__CFG6 CYREG_UDB_PA1_CFG6
#define ADC_IN__0__PA__CFG7 CYREG_UDB_PA1_CFG7
#define ADC_IN__0__PA__CFG8 CYREG_UDB_PA1_CFG8
#define ADC_IN__0__PA__CFG9 CYREG_UDB_PA1_CFG9
#define ADC_IN__0__PC CYREG_PRT1_PC
#define ADC_IN__0__PC2 CYREG_PRT1_PC2
#define ADC_IN__0__PORT 1u
#define ADC_IN__0__PS CYREG_PRT1_PS
#define ADC_IN__0__SHIFT 0
#define ADC_IN__DR CYREG_PRT1_DR
#define ADC_IN__INTCFG CYREG_PRT1_INTCFG
#define ADC_IN__INTSTAT CYREG_PRT1_INTSTAT
#define ADC_IN__MASK 0x01u
#define ADC_IN__PA__CFG0 CYREG_UDB_PA1_CFG0
#define ADC_IN__PA__CFG1 CYREG_UDB_PA1_CFG1
#define ADC_IN__PA__CFG10 CYREG_UDB_PA1_CFG10
#define ADC_IN__PA__CFG11 CYREG_UDB_PA1_CFG11
#define ADC_IN__PA__CFG12 CYREG_UDB_PA1_CFG12
#define ADC_IN__PA__CFG13 CYREG_UDB_PA1_CFG13
#define ADC_IN__PA__CFG14 CYREG_UDB_PA1_CFG14
#define ADC_IN__PA__CFG2 CYREG_UDB_PA1_CFG2
#define ADC_IN__PA__CFG3 CYREG_UDB_PA1_CFG3
#define ADC_IN__PA__CFG4 CYREG_UDB_PA1_CFG4
#define ADC_IN__PA__CFG5 CYREG_UDB_PA1_CFG5
#define ADC_IN__PA__CFG6 CYREG_UDB_PA1_CFG6
#define ADC_IN__PA__CFG7 CYREG_UDB_PA1_CFG7
#define ADC_IN__PA__CFG8 CYREG_UDB_PA1_CFG8
#define ADC_IN__PA__CFG9 CYREG_UDB_PA1_CFG9
#define ADC_IN__PC CYREG_PRT1_PC
#define ADC_IN__PC2 CYREG_PRT1_PC2
#define ADC_IN__PORT 1u
#define ADC_IN__PS CYREG_PRT1_PS
#define ADC_IN__SHIFT 0

/* ADC_intClock */
#define ADC_intClock__DIVIDER_MASK 0x0000FFFFu
#define ADC_intClock__ENABLE CYREG_CLK_DIVIDER_A00
#define ADC_intClock__ENABLE_MASK 0x80000000u
#define ADC_intClock__MASK 0x80000000u
#define ADC_intClock__REGISTER CYREG_CLK_DIVIDER_A00

/* ADC_IRQ */
#define ADC_IRQ__INTC_CLR_EN_REG CYREG_CM0_ICER
#define ADC_IRQ__INTC_CLR_PD_REG CYREG_CM0_ICPR
#define ADC_IRQ__INTC_MASK 0x4000u
#define ADC_IRQ__INTC_NUMBER 14u
#define ADC_IRQ__INTC_PRIOR_MASK 0xC00000u
#define ADC_IRQ__INTC_PRIOR_NUM 3u
#define ADC_IRQ__INTC_PRIOR_REG CYREG_CM0_IPR3
#define ADC_IRQ__INTC_SET_EN_REG CYREG_CM0_ISER
#define ADC_IRQ__INTC_SET_PD_REG CYREG_CM0_ISPR

/* OA_O */
#define OA_O__0__DM__MASK 0x1C0u
#define OA_O__0__DM__SHIFT 6
#define OA_O__0__DR CYREG_PRT1_DR
#define OA_O__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define OA_O__0__HSIOM_MASK 0x00000F00u
#define OA_O__0__HSIOM_SHIFT 8u
#define OA_O__0__INTCFG CYREG_PRT1_INTCFG
#define OA_O__0__INTSTAT CYREG_PRT1_INTSTAT
#define OA_O__0__MASK 0x04u
#define OA_O__0__PA__CFG0 CYREG_UDB_PA1_CFG0
#define OA_O__0__PA__CFG1 CYREG_UDB_PA1_CFG1
#define OA_O__0__PA__CFG10 CYREG_UDB_PA1_CFG10
#define OA_O__0__PA__CFG11 CYREG_UDB_PA1_CFG11
#define OA_O__0__PA__CFG12 CYREG_UDB_PA1_CFG12
#define OA_O__0__PA__CFG13 CYREG_UDB_PA1_CFG13
#define OA_O__0__PA__CFG14 CYREG_UDB_PA1_CFG14
#define OA_O__0__PA__CFG2 CYREG_UDB_PA1_CFG2
#define OA_O__0__PA__CFG3 CYREG_UDB_PA1_CFG3
#define OA_O__0__PA__CFG4 CYREG_UDB_PA1_CFG4
#define OA_O__0__PA__CFG5 CYREG_UDB_PA1_CFG5
#define OA_O__0__PA__CFG6 CYREG_UDB_PA1_CFG6
#define OA_O__0__PA__CFG7 CYREG_UDB_PA1_CFG7
#define OA_O__0__PA__CFG8 CYREG_UDB_PA1_CFG8
#define OA_O__0__PA__CFG9 CYREG_UDB_PA1_CFG9
#define OA_O__0__PC CYREG_PRT1_PC
#define OA_O__0__PC2 CYREG_PRT1_PC2
#define OA_O__0__PORT 1u
#define OA_O__0__PS CYREG_PRT1_PS
#define OA_O__0__SHIFT 2
#define OA_O__DR CYREG_PRT1_DR
#define OA_O__INTCFG CYREG_PRT1_INTCFG
#define OA_O__INTSTAT CYREG_PRT1_INTSTAT
#define OA_O__MASK 0x04u
#define OA_O__PA__CFG0 CYREG_UDB_PA1_CFG0
#define OA_O__PA__CFG1 CYREG_UDB_PA1_CFG1
#define OA_O__PA__CFG10 CYREG_UDB_PA1_CFG10
#define OA_O__PA__CFG11 CYREG_UDB_PA1_CFG11
#define OA_O__PA__CFG12 CYREG_UDB_PA1_CFG12
#define OA_O__PA__CFG13 CYREG_UDB_PA1_CFG13
#define OA_O__PA__CFG14 CYREG_UDB_PA1_CFG14
#define OA_O__PA__CFG2 CYREG_UDB_PA1_CFG2
#define OA_O__PA__CFG3 CYREG_UDB_PA1_CFG3
#define OA_O__PA__CFG4 CYREG_UDB_PA1_CFG4
#define OA_O__PA__CFG5 CYREG_UDB_PA1_CFG5
#define OA_O__PA__CFG6 CYREG_UDB_PA1_CFG6
#define OA_O__PA__CFG7 CYREG_UDB_PA1_CFG7
#define OA_O__PA__CFG8 CYREG_UDB_PA1_CFG8
#define OA_O__PA__CFG9 CYREG_UDB_PA1_CFG9
#define OA_O__PC CYREG_PRT1_PC
#define OA_O__PC2 CYREG_PRT1_PC2
#define OA_O__PORT 1u
#define OA_O__PS CYREG_PRT1_PS
#define OA_O__SHIFT 2

/* RH_T */
#define RH_T__0__DM__MASK 0x38000u
#define RH_T__0__DM__SHIFT 15
#define RH_T__0__DR CYREG_PRT2_DR
#define RH_T__0__HSIOM CYREG_HSIOM_PORT_SEL2
#define RH_T__0__HSIOM_MASK 0x00F00000u
#define RH_T__0__HSIOM_SHIFT 20u
#define RH_T__0__INTCFG CYREG_PRT2_INTCFG
#define RH_T__0__INTSTAT CYREG_PRT2_INTSTAT
#define RH_T__0__MASK 0x20u
#define RH_T__0__OUT_SEL CYREG_UDB_PA2_CFG10
#define RH_T__0__OUT_SEL_SHIFT 10u
#define RH_T__0__OUT_SEL_VAL 1u
#define RH_T__0__PA__CFG0 CYREG_UDB_PA2_CFG0
#define RH_T__0__PA__CFG1 CYREG_UDB_PA2_CFG1
#define RH_T__0__PA__CFG10 CYREG_UDB_PA2_CFG10
#define RH_T__0__PA__CFG11 CYREG_UDB_PA2_CFG11
#define RH_T__0__PA__CFG12 CYREG_UDB_PA2_CFG12
#define RH_T__0__PA__CFG13 CYREG_UDB_PA2_CFG13
#define RH_T__0__PA__CFG14 CYREG_UDB_PA2_CFG14
#define RH_T__0__PA__CFG2 CYREG_UDB_PA2_CFG2
#define RH_T__0__PA__CFG3 CYREG_UDB_PA2_CFG3
#define RH_T__0__PA__CFG4 CYREG_UDB_PA2_CFG4
#define RH_T__0__PA__CFG5 CYREG_UDB_PA2_CFG5
#define RH_T__0__PA__CFG6 CYREG_UDB_PA2_CFG6
#define RH_T__0__PA__CFG7 CYREG_UDB_PA2_CFG7
#define RH_T__0__PA__CFG8 CYREG_UDB_PA2_CFG8
#define RH_T__0__PA__CFG9 CYREG_UDB_PA2_CFG9
#define RH_T__0__PC CYREG_PRT2_PC
#define RH_T__0__PC2 CYREG_PRT2_PC2
#define RH_T__0__PORT 2u
#define RH_T__0__PS CYREG_PRT2_PS
#define RH_T__0__SHIFT 5
#define RH_T__DR CYREG_PRT2_DR
#define RH_T__INTCFG CYREG_PRT2_INTCFG
#define RH_T__INTSTAT CYREG_PRT2_INTSTAT
#define RH_T__MASK 0x20u
#define RH_T__PA__CFG0 CYREG_UDB_PA2_CFG0
#define RH_T__PA__CFG1 CYREG_UDB_PA2_CFG1
#define RH_T__PA__CFG10 CYREG_UDB_PA2_CFG10
#define RH_T__PA__CFG11 CYREG_UDB_PA2_CFG11
#define RH_T__PA__CFG12 CYREG_UDB_PA2_CFG12
#define RH_T__PA__CFG13 CYREG_UDB_PA2_CFG13
#define RH_T__PA__CFG14 CYREG_UDB_PA2_CFG14
#define RH_T__PA__CFG2 CYREG_UDB_PA2_CFG2
#define RH_T__PA__CFG3 CYREG_UDB_PA2_CFG3
#define RH_T__PA__CFG4 CYREG_UDB_PA2_CFG4
#define RH_T__PA__CFG5 CYREG_UDB_PA2_CFG5
#define RH_T__PA__CFG6 CYREG_UDB_PA2_CFG6
#define RH_T__PA__CFG7 CYREG_UDB_PA2_CFG7
#define RH_T__PA__CFG8 CYREG_UDB_PA2_CFG8
#define RH_T__PA__CFG9 CYREG_UDB_PA2_CFG9
#define RH_T__PC CYREG_PRT2_PC
#define RH_T__PC2 CYREG_PRT2_PC2
#define RH_T__PORT 2u
#define RH_T__PS CYREG_PRT2_PS
#define RH_T__SHIFT 5

/* TH_T */
#define TH_T__0__DM__MASK 0x7000u
#define TH_T__0__DM__SHIFT 12
#define TH_T__0__DR CYREG_PRT2_DR
#define TH_T__0__HSIOM CYREG_HSIOM_PORT_SEL2
#define TH_T__0__HSIOM_MASK 0x000F0000u
#define TH_T__0__HSIOM_SHIFT 16u
#define TH_T__0__INTCFG CYREG_PRT2_INTCFG
#define TH_T__0__INTSTAT CYREG_PRT2_INTSTAT
#define TH_T__0__MASK 0x10u
#define TH_T__0__OUT_SEL CYREG_UDB_PA2_CFG10
#define TH_T__0__OUT_SEL_SHIFT 8u
#define TH_T__0__OUT_SEL_VAL 1u
#define TH_T__0__PA__CFG0 CYREG_UDB_PA2_CFG0
#define TH_T__0__PA__CFG1 CYREG_UDB_PA2_CFG1
#define TH_T__0__PA__CFG10 CYREG_UDB_PA2_CFG10
#define TH_T__0__PA__CFG11 CYREG_UDB_PA2_CFG11
#define TH_T__0__PA__CFG12 CYREG_UDB_PA2_CFG12
#define TH_T__0__PA__CFG13 CYREG_UDB_PA2_CFG13
#define TH_T__0__PA__CFG14 CYREG_UDB_PA2_CFG14
#define TH_T__0__PA__CFG2 CYREG_UDB_PA2_CFG2
#define TH_T__0__PA__CFG3 CYREG_UDB_PA2_CFG3
#define TH_T__0__PA__CFG4 CYREG_UDB_PA2_CFG4
#define TH_T__0__PA__CFG5 CYREG_UDB_PA2_CFG5
#define TH_T__0__PA__CFG6 CYREG_UDB_PA2_CFG6
#define TH_T__0__PA__CFG7 CYREG_UDB_PA2_CFG7
#define TH_T__0__PA__CFG8 CYREG_UDB_PA2_CFG8
#define TH_T__0__PA__CFG9 CYREG_UDB_PA2_CFG9
#define TH_T__0__PC CYREG_PRT2_PC
#define TH_T__0__PC2 CYREG_PRT2_PC2
#define TH_T__0__PORT 2u
#define TH_T__0__PS CYREG_PRT2_PS
#define TH_T__0__SHIFT 4
#define TH_T__DR CYREG_PRT2_DR
#define TH_T__INTCFG CYREG_PRT2_INTCFG
#define TH_T__INTSTAT CYREG_PRT2_INTSTAT
#define TH_T__MASK 0x10u
#define TH_T__PA__CFG0 CYREG_UDB_PA2_CFG0
#define TH_T__PA__CFG1 CYREG_UDB_PA2_CFG1
#define TH_T__PA__CFG10 CYREG_UDB_PA2_CFG10
#define TH_T__PA__CFG11 CYREG_UDB_PA2_CFG11
#define TH_T__PA__CFG12 CYREG_UDB_PA2_CFG12
#define TH_T__PA__CFG13 CYREG_UDB_PA2_CFG13
#define TH_T__PA__CFG14 CYREG_UDB_PA2_CFG14
#define TH_T__PA__CFG2 CYREG_UDB_PA2_CFG2
#define TH_T__PA__CFG3 CYREG_UDB_PA2_CFG3
#define TH_T__PA__CFG4 CYREG_UDB_PA2_CFG4
#define TH_T__PA__CFG5 CYREG_UDB_PA2_CFG5
#define TH_T__PA__CFG6 CYREG_UDB_PA2_CFG6
#define TH_T__PA__CFG7 CYREG_UDB_PA2_CFG7
#define TH_T__PA__CFG8 CYREG_UDB_PA2_CFG8
#define TH_T__PA__CFG9 CYREG_UDB_PA2_CFG9
#define TH_T__PC CYREG_PRT2_PC
#define TH_T__PC2 CYREG_PRT2_PC2
#define TH_T__PORT 2u
#define TH_T__PS CYREG_PRT2_PS
#define TH_T__SHIFT 4

/* UART_rx */
#define UART_rx__0__DM__MASK 0x07u
#define UART_rx__0__DM__SHIFT 0
#define UART_rx__0__DR CYREG_PRT4_DR
#define UART_rx__0__HSIOM CYREG_HSIOM_PORT_SEL4
#define UART_rx__0__HSIOM_MASK 0x0000000Fu
#define UART_rx__0__HSIOM_SHIFT 0u
#define UART_rx__0__INTCFG CYREG_PRT4_INTCFG
#define UART_rx__0__INTSTAT CYREG_PRT4_INTSTAT
#define UART_rx__0__MASK 0x01u
#define UART_rx__0__PC CYREG_PRT4_PC
#define UART_rx__0__PC2 CYREG_PRT4_PC2
#define UART_rx__0__PORT 4u
#define UART_rx__0__PS CYREG_PRT4_PS
#define UART_rx__0__SHIFT 0
#define UART_rx__DR CYREG_PRT4_DR
#define UART_rx__INTCFG CYREG_PRT4_INTCFG
#define UART_rx__INTSTAT CYREG_PRT4_INTSTAT
#define UART_rx__MASK 0x01u
#define UART_rx__PC CYREG_PRT4_PC
#define UART_rx__PC2 CYREG_PRT4_PC2
#define UART_rx__PORT 4u
#define UART_rx__PS CYREG_PRT4_PS
#define UART_rx__SHIFT 0

/* UART_SCB */
#define UART_SCB__BIST_CONTROL CYREG_SCB0_BIST_CONTROL
#define UART_SCB__BIST_DATA CYREG_SCB0_BIST_DATA
#define UART_SCB__CTRL CYREG_SCB0_CTRL
#define UART_SCB__EZ_DATA00 CYREG_SCB0_EZ_DATA00
#define UART_SCB__EZ_DATA01 CYREG_SCB0_EZ_DATA01
#define UART_SCB__EZ_DATA02 CYREG_SCB0_EZ_DATA02
#define UART_SCB__EZ_DATA03 CYREG_SCB0_EZ_DATA03
#define UART_SCB__EZ_DATA04 CYREG_SCB0_EZ_DATA04
#define UART_SCB__EZ_DATA05 CYREG_SCB0_EZ_DATA05
#define UART_SCB__EZ_DATA06 CYREG_SCB0_EZ_DATA06
#define UART_SCB__EZ_DATA07 CYREG_SCB0_EZ_DATA07
#define UART_SCB__EZ_DATA08 CYREG_SCB0_EZ_DATA08
#define UART_SCB__EZ_DATA09 CYREG_SCB0_EZ_DATA09
#define UART_SCB__EZ_DATA10 CYREG_SCB0_EZ_DATA10
#define UART_SCB__EZ_DATA11 CYREG_SCB0_EZ_DATA11
#define UART_SCB__EZ_DATA12 CYREG_SCB0_EZ_DATA12
#define UART_SCB__EZ_DATA13 CYREG_SCB0_EZ_DATA13
#define UART_SCB__EZ_DATA14 CYREG_SCB0_EZ_DATA14
#define UART_SCB__EZ_DATA15 CYREG_SCB0_EZ_DATA15
#define UART_SCB__EZ_DATA16 CYREG_SCB0_EZ_DATA16
#define UART_SCB__EZ_DATA17 CYREG_SCB0_EZ_DATA17
#define UART_SCB__EZ_DATA18 CYREG_SCB0_EZ_DATA18
#define UART_SCB__EZ_DATA19 CYREG_SCB0_EZ_DATA19
#define UART_SCB__EZ_DATA20 CYREG_SCB0_EZ_DATA20
#define UART_SCB__EZ_DATA21 CYREG_SCB0_EZ_DATA21
#define UART_SCB__EZ_DATA22 CYREG_SCB0_EZ_DATA22
#define UART_SCB__EZ_DATA23 CYREG_SCB0_EZ_DATA23
#define UART_SCB__EZ_DATA24 CYREG_SCB0_EZ_DATA24
#define UART_SCB__EZ_DATA25 CYREG_SCB0_EZ_DATA25
#define UART_SCB__EZ_DATA26 CYREG_SCB0_EZ_DATA26
#define UART_SCB__EZ_DATA27 CYREG_SCB0_EZ_DATA27
#define UART_SCB__EZ_DATA28 CYREG_SCB0_EZ_DATA28
#define UART_SCB__EZ_DATA29 CYREG_SCB0_EZ_DATA29
#define UART_SCB__EZ_DATA30 CYREG_SCB0_EZ_DATA30
#define UART_SCB__EZ_DATA31 CYREG_SCB0_EZ_DATA31
#define UART_SCB__I2C_CFG CYREG_SCB0_I2C_CFG
#define UART_SCB__I2C_CTRL CYREG_SCB0_I2C_CTRL
#define UART_SCB__I2C_M_CMD CYREG_SCB0_I2C_M_CMD
#define UART_SCB__I2C_S_CMD CYREG_SCB0_I2C_S_CMD
#define UART_SCB__I2C_STATUS CYREG_SCB0_I2C_STATUS
#define UART_SCB__INTR_CAUSE CYREG_SCB0_INTR_CAUSE
#define UART_SCB__INTR_I2C_EC CYREG_SCB0_INTR_I2C_EC
#define UART_SCB__INTR_I2C_EC_MASK CYREG_SCB0_INTR_I2C_EC_MASK
#define UART_SCB__INTR_I2C_EC_MASKED CYREG_SCB0_INTR_I2C_EC_MASKED
#define UART_SCB__INTR_M CYREG_SCB0_INTR_M
#define UART_SCB__INTR_M_MASK CYREG_SCB0_INTR_M_MASK
#define UART_SCB__INTR_M_MASKED CYREG_SCB0_INTR_M_MASKED
#define UART_SCB__INTR_M_SET CYREG_SCB0_INTR_M_SET
#define UART_SCB__INTR_RX CYREG_SCB0_INTR_RX
#define UART_SCB__INTR_RX_MASK CYREG_SCB0_INTR_RX_MASK
#define UART_SCB__INTR_RX_MASKED CYREG_SCB0_INTR_RX_MASKED
#define UART_SCB__INTR_RX_SET CYREG_SCB0_INTR_RX_SET
#define UART_SCB__INTR_S CYREG_SCB0_INTR_S
#define UART_SCB__INTR_S_MASK CYREG_SCB0_INTR_S_MASK
#define UART_SCB__INTR_S_MASKED CYREG_SCB0_INTR_S_MASKED
#define UART_SCB__INTR_S_SET CYREG_SCB0_INTR_S_SET
#define UART_SCB__INTR_SPI_EC CYREG_SCB0_INTR_SPI_EC
#define UART_SCB__INTR_SPI_EC_MASK CYREG_SCB0_INTR_SPI_EC_MASK
#define UART_SCB__INTR_SPI_EC_MASKED CYREG_SCB0_INTR_SPI_EC_MASKED
#define UART_SCB__INTR_TX CYREG_SCB0_INTR_TX
#define UART_SCB__INTR_TX_MASK CYREG_SCB0_INTR_TX_MASK
#define UART_SCB__INTR_TX_MASKED CYREG_SCB0_INTR_TX_MASKED
#define UART_SCB__INTR_TX_SET CYREG_SCB0_INTR_TX_SET
#define UART_SCB__RX_CTRL CYREG_SCB0_RX_CTRL
#define UART_SCB__RX_FIFO_CTRL CYREG_SCB0_RX_FIFO_CTRL
#define UART_SCB__RX_FIFO_RD CYREG_SCB0_RX_FIFO_RD
#define UART_SCB__RX_FIFO_RD_SILENT CYREG_SCB0_RX_FIFO_RD_SILENT
#define UART_SCB__RX_FIFO_STATUS CYREG_SCB0_RX_FIFO_STATUS
#define UART_SCB__RX_MATCH CYREG_SCB0_RX_MATCH
#define UART_SCB__SPI_CTRL CYREG_SCB0_SPI_CTRL
#define UART_SCB__SPI_STATUS CYREG_SCB0_SPI_STATUS
#define UART_SCB__SS0_POSISTION 0u
#define UART_SCB__SS1_POSISTION 1u
#define UART_SCB__SS2_POSISTION 2u
#define UART_SCB__SS3_POSISTION 3u
#define UART_SCB__STATUS CYREG_SCB0_STATUS
#define UART_SCB__TX_CTRL CYREG_SCB0_TX_CTRL
#define UART_SCB__TX_FIFO_CTRL CYREG_SCB0_TX_FIFO_CTRL
#define UART_SCB__TX_FIFO_STATUS CYREG_SCB0_TX_FIFO_STATUS
#define UART_SCB__TX_FIFO_WR CYREG_SCB0_TX_FIFO_WR
#define UART_SCB__UART_CTRL CYREG_SCB0_UART_CTRL
#define UART_SCB__UART_RX_CTRL CYREG_SCB0_UART_RX_CTRL
#define UART_SCB__UART_RX_STATUS CYREG_SCB0_UART_RX_STATUS
#define UART_SCB__UART_TX_CTRL CYREG_SCB0_UART_TX_CTRL

/* UART_SCBCLK */
#define UART_SCBCLK__DIVIDER_MASK 0x0000FFFFu
#define UART_SCBCLK__ENABLE CYREG_CLK_DIVIDER_B00
#define UART_SCBCLK__ENABLE_MASK 0x80000000u
#define UART_SCBCLK__MASK 0x80000000u
#define UART_SCBCLK__REGISTER CYREG_CLK_DIVIDER_B00

/* UART_tx */
#define UART_tx__0__DM__MASK 0x38u
#define UART_tx__0__DM__SHIFT 3
#define UART_tx__0__DR CYREG_PRT4_DR
#define UART_tx__0__HSIOM CYREG_HSIOM_PORT_SEL4
#define UART_tx__0__HSIOM_MASK 0x000000F0u
#define UART_tx__0__HSIOM_SHIFT 4u
#define UART_tx__0__INTCFG CYREG_PRT4_INTCFG
#define UART_tx__0__INTSTAT CYREG_PRT4_INTSTAT
#define UART_tx__0__MASK 0x02u
#define UART_tx__0__PC CYREG_PRT4_PC
#define UART_tx__0__PC2 CYREG_PRT4_PC2
#define UART_tx__0__PORT 4u
#define UART_tx__0__PS CYREG_PRT4_PS
#define UART_tx__0__SHIFT 1
#define UART_tx__DR CYREG_PRT4_DR
#define UART_tx__INTCFG CYREG_PRT4_INTCFG
#define UART_tx__INTSTAT CYREG_PRT4_INTSTAT
#define UART_tx__MASK 0x02u
#define UART_tx__PC CYREG_PRT4_PC
#define UART_tx__PC2 CYREG_PRT4_PC2
#define UART_tx__PORT 4u
#define UART_tx__PS CYREG_PRT4_PS
#define UART_tx__SHIFT 1

/* EXT_T */
#define EXT_T__0__DM__MASK 0x1C0000u
#define EXT_T__0__DM__SHIFT 18
#define EXT_T__0__DR CYREG_PRT2_DR
#define EXT_T__0__HSIOM CYREG_HSIOM_PORT_SEL2
#define EXT_T__0__HSIOM_MASK 0x0F000000u
#define EXT_T__0__HSIOM_SHIFT 24u
#define EXT_T__0__INTCFG CYREG_PRT2_INTCFG
#define EXT_T__0__INTSTAT CYREG_PRT2_INTSTAT
#define EXT_T__0__MASK 0x40u
#define EXT_T__0__OUT_SEL CYREG_UDB_PA2_CFG10
#define EXT_T__0__OUT_SEL_SHIFT 12u
#define EXT_T__0__OUT_SEL_VAL 1u
#define EXT_T__0__PA__CFG0 CYREG_UDB_PA2_CFG0
#define EXT_T__0__PA__CFG1 CYREG_UDB_PA2_CFG1
#define EXT_T__0__PA__CFG10 CYREG_UDB_PA2_CFG10
#define EXT_T__0__PA__CFG11 CYREG_UDB_PA2_CFG11
#define EXT_T__0__PA__CFG12 CYREG_UDB_PA2_CFG12
#define EXT_T__0__PA__CFG13 CYREG_UDB_PA2_CFG13
#define EXT_T__0__PA__CFG14 CYREG_UDB_PA2_CFG14
#define EXT_T__0__PA__CFG2 CYREG_UDB_PA2_CFG2
#define EXT_T__0__PA__CFG3 CYREG_UDB_PA2_CFG3
#define EXT_T__0__PA__CFG4 CYREG_UDB_PA2_CFG4
#define EXT_T__0__PA__CFG5 CYREG_UDB_PA2_CFG5
#define EXT_T__0__PA__CFG6 CYREG_UDB_PA2_CFG6
#define EXT_T__0__PA__CFG7 CYREG_UDB_PA2_CFG7
#define EXT_T__0__PA__CFG8 CYREG_UDB_PA2_CFG8
#define EXT_T__0__PA__CFG9 CYREG_UDB_PA2_CFG9
#define EXT_T__0__PC CYREG_PRT2_PC
#define EXT_T__0__PC2 CYREG_PRT2_PC2
#define EXT_T__0__PORT 2u
#define EXT_T__0__PS CYREG_PRT2_PS
#define EXT_T__0__SHIFT 6
#define EXT_T__DR CYREG_PRT2_DR
#define EXT_T__INTCFG CYREG_PRT2_INTCFG
#define EXT_T__INTSTAT CYREG_PRT2_INTSTAT
#define EXT_T__MASK 0x40u
#define EXT_T__PA__CFG0 CYREG_UDB_PA2_CFG0
#define EXT_T__PA__CFG1 CYREG_UDB_PA2_CFG1
#define EXT_T__PA__CFG10 CYREG_UDB_PA2_CFG10
#define EXT_T__PA__CFG11 CYREG_UDB_PA2_CFG11
#define EXT_T__PA__CFG12 CYREG_UDB_PA2_CFG12
#define EXT_T__PA__CFG13 CYREG_UDB_PA2_CFG13
#define EXT_T__PA__CFG14 CYREG_UDB_PA2_CFG14
#define EXT_T__PA__CFG2 CYREG_UDB_PA2_CFG2
#define EXT_T__PA__CFG3 CYREG_UDB_PA2_CFG3
#define EXT_T__PA__CFG4 CYREG_UDB_PA2_CFG4
#define EXT_T__PA__CFG5 CYREG_UDB_PA2_CFG5
#define EXT_T__PA__CFG6 CYREG_UDB_PA2_CFG6
#define EXT_T__PA__CFG7 CYREG_UDB_PA2_CFG7
#define EXT_T__PA__CFG8 CYREG_UDB_PA2_CFG8
#define EXT_T__PA__CFG9 CYREG_UDB_PA2_CFG9
#define EXT_T__PC CYREG_PRT2_PC
#define EXT_T__PC2 CYREG_PRT2_PC2
#define EXT_T__PORT 2u
#define EXT_T__PS CYREG_PRT2_PS
#define EXT_T__SHIFT 6

/* Opamp_cy_psoc4_abuf */
#define Opamp_cy_psoc4_abuf__COMP_STAT CYREG_CTBM_COMP_STAT
#define Opamp_cy_psoc4_abuf__COMP_STAT_SHIFT 0
#define Opamp_cy_psoc4_abuf__CTBM_CTB_CTRL CYREG_CTBM_CTB_CTRL
#define Opamp_cy_psoc4_abuf__INTR CYREG_CTBM_INTR
#define Opamp_cy_psoc4_abuf__INTR_MASK CYREG_CTBM_INTR_MASK
#define Opamp_cy_psoc4_abuf__INTR_MASK_SHIFT 0
#define Opamp_cy_psoc4_abuf__INTR_MASKED CYREG_CTBM_INTR_MASKED
#define Opamp_cy_psoc4_abuf__INTR_MASKED_SHIFT 0
#define Opamp_cy_psoc4_abuf__INTR_SET CYREG_CTBM_INTR_SET
#define Opamp_cy_psoc4_abuf__INTR_SET_SHIFT 0
#define Opamp_cy_psoc4_abuf__INTR_SHIFT 0
#define Opamp_cy_psoc4_abuf__OA_COMP_TRIM CYREG_CTBM_OA0_COMP_TRIM
#define Opamp_cy_psoc4_abuf__OA_NUMBER 0u
#define Opamp_cy_psoc4_abuf__OA_OFFSET_TRIM CYREG_CTBM_OA0_OFFSET_TRIM
#define Opamp_cy_psoc4_abuf__OA_RES_CTRL CYREG_CTBM_OA_RES0_CTRL
#define Opamp_cy_psoc4_abuf__OA_SLOPE_OFFSET_TRIM CYREG_CTBM_OA0_SLOPE_OFFSET_TRIM

/* VBAT_T */
#define VBAT_T__0__DM__MASK 0xE00u
#define VBAT_T__0__DM__SHIFT 9
#define VBAT_T__0__DR CYREG_PRT2_DR
#define VBAT_T__0__HSIOM CYREG_HSIOM_PORT_SEL2
#define VBAT_T__0__HSIOM_MASK 0x0000F000u
#define VBAT_T__0__HSIOM_SHIFT 12u
#define VBAT_T__0__INTCFG CYREG_PRT2_INTCFG
#define VBAT_T__0__INTSTAT CYREG_PRT2_INTSTAT
#define VBAT_T__0__MASK 0x08u
#define VBAT_T__0__OUT_SEL CYREG_UDB_PA2_CFG10
#define VBAT_T__0__OUT_SEL_SHIFT 6u
#define VBAT_T__0__OUT_SEL_VAL 1u
#define VBAT_T__0__PA__CFG0 CYREG_UDB_PA2_CFG0
#define VBAT_T__0__PA__CFG1 CYREG_UDB_PA2_CFG1
#define VBAT_T__0__PA__CFG10 CYREG_UDB_PA2_CFG10
#define VBAT_T__0__PA__CFG11 CYREG_UDB_PA2_CFG11
#define VBAT_T__0__PA__CFG12 CYREG_UDB_PA2_CFG12
#define VBAT_T__0__PA__CFG13 CYREG_UDB_PA2_CFG13
#define VBAT_T__0__PA__CFG14 CYREG_UDB_PA2_CFG14
#define VBAT_T__0__PA__CFG2 CYREG_UDB_PA2_CFG2
#define VBAT_T__0__PA__CFG3 CYREG_UDB_PA2_CFG3
#define VBAT_T__0__PA__CFG4 CYREG_UDB_PA2_CFG4
#define VBAT_T__0__PA__CFG5 CYREG_UDB_PA2_CFG5
#define VBAT_T__0__PA__CFG6 CYREG_UDB_PA2_CFG6
#define VBAT_T__0__PA__CFG7 CYREG_UDB_PA2_CFG7
#define VBAT_T__0__PA__CFG8 CYREG_UDB_PA2_CFG8
#define VBAT_T__0__PA__CFG9 CYREG_UDB_PA2_CFG9
#define VBAT_T__0__PC CYREG_PRT2_PC
#define VBAT_T__0__PC2 CYREG_PRT2_PC2
#define VBAT_T__0__PORT 2u
#define VBAT_T__0__PS CYREG_PRT2_PS
#define VBAT_T__0__SHIFT 3
#define VBAT_T__DR CYREG_PRT2_DR
#define VBAT_T__INTCFG CYREG_PRT2_INTCFG
#define VBAT_T__INTSTAT CYREG_PRT2_INTSTAT
#define VBAT_T__MASK 0x08u
#define VBAT_T__PA__CFG0 CYREG_UDB_PA2_CFG0
#define VBAT_T__PA__CFG1 CYREG_UDB_PA2_CFG1
#define VBAT_T__PA__CFG10 CYREG_UDB_PA2_CFG10
#define VBAT_T__PA__CFG11 CYREG_UDB_PA2_CFG11
#define VBAT_T__PA__CFG12 CYREG_UDB_PA2_CFG12
#define VBAT_T__PA__CFG13 CYREG_UDB_PA2_CFG13
#define VBAT_T__PA__CFG14 CYREG_UDB_PA2_CFG14
#define VBAT_T__PA__CFG2 CYREG_UDB_PA2_CFG2
#define VBAT_T__PA__CFG3 CYREG_UDB_PA2_CFG3
#define VBAT_T__PA__CFG4 CYREG_UDB_PA2_CFG4
#define VBAT_T__PA__CFG5 CYREG_UDB_PA2_CFG5
#define VBAT_T__PA__CFG6 CYREG_UDB_PA2_CFG6
#define VBAT_T__PA__CFG7 CYREG_UDB_PA2_CFG7
#define VBAT_T__PA__CFG8 CYREG_UDB_PA2_CFG8
#define VBAT_T__PA__CFG9 CYREG_UDB_PA2_CFG9
#define VBAT_T__PC CYREG_PRT2_PC
#define VBAT_T__PC2 CYREG_PRT2_PC2
#define VBAT_T__PORT 2u
#define VBAT_T__PS CYREG_PRT2_PS
#define VBAT_T__SHIFT 3

/* VSSREF */
#define VSSREF__0__DM__MASK 0x1C0u
#define VSSREF__0__DM__SHIFT 6
#define VSSREF__0__DR CYREG_PRT2_DR
#define VSSREF__0__HSIOM CYREG_HSIOM_PORT_SEL2
#define VSSREF__0__HSIOM_MASK 0x00000F00u
#define VSSREF__0__HSIOM_SHIFT 8u
#define VSSREF__0__INTCFG CYREG_PRT2_INTCFG
#define VSSREF__0__INTSTAT CYREG_PRT2_INTSTAT
#define VSSREF__0__MASK 0x04u
#define VSSREF__0__OUT_SEL CYREG_UDB_PA2_CFG10
#define VSSREF__0__OUT_SEL_SHIFT 4u
#define VSSREF__0__OUT_SEL_VAL 1u
#define VSSREF__0__PA__CFG0 CYREG_UDB_PA2_CFG0
#define VSSREF__0__PA__CFG1 CYREG_UDB_PA2_CFG1
#define VSSREF__0__PA__CFG10 CYREG_UDB_PA2_CFG10
#define VSSREF__0__PA__CFG11 CYREG_UDB_PA2_CFG11
#define VSSREF__0__PA__CFG12 CYREG_UDB_PA2_CFG12
#define VSSREF__0__PA__CFG13 CYREG_UDB_PA2_CFG13
#define VSSREF__0__PA__CFG14 CYREG_UDB_PA2_CFG14
#define VSSREF__0__PA__CFG2 CYREG_UDB_PA2_CFG2
#define VSSREF__0__PA__CFG3 CYREG_UDB_PA2_CFG3
#define VSSREF__0__PA__CFG4 CYREG_UDB_PA2_CFG4
#define VSSREF__0__PA__CFG5 CYREG_UDB_PA2_CFG5
#define VSSREF__0__PA__CFG6 CYREG_UDB_PA2_CFG6
#define VSSREF__0__PA__CFG7 CYREG_UDB_PA2_CFG7
#define VSSREF__0__PA__CFG8 CYREG_UDB_PA2_CFG8
#define VSSREF__0__PA__CFG9 CYREG_UDB_PA2_CFG9
#define VSSREF__0__PC CYREG_PRT2_PC
#define VSSREF__0__PC2 CYREG_PRT2_PC2
#define VSSREF__0__PORT 2u
#define VSSREF__0__PS CYREG_PRT2_PS
#define VSSREF__0__SHIFT 2
#define VSSREF__DR CYREG_PRT2_DR
#define VSSREF__INTCFG CYREG_PRT2_INTCFG
#define VSSREF__INTSTAT CYREG_PRT2_INTSTAT
#define VSSREF__MASK 0x04u
#define VSSREF__PA__CFG0 CYREG_UDB_PA2_CFG0
#define VSSREF__PA__CFG1 CYREG_UDB_PA2_CFG1
#define VSSREF__PA__CFG10 CYREG_UDB_PA2_CFG10
#define VSSREF__PA__CFG11 CYREG_UDB_PA2_CFG11
#define VSSREF__PA__CFG12 CYREG_UDB_PA2_CFG12
#define VSSREF__PA__CFG13 CYREG_UDB_PA2_CFG13
#define VSSREF__PA__CFG14 CYREG_UDB_PA2_CFG14
#define VSSREF__PA__CFG2 CYREG_UDB_PA2_CFG2
#define VSSREF__PA__CFG3 CYREG_UDB_PA2_CFG3
#define VSSREF__PA__CFG4 CYREG_UDB_PA2_CFG4
#define VSSREF__PA__CFG5 CYREG_UDB_PA2_CFG5
#define VSSREF__PA__CFG6 CYREG_UDB_PA2_CFG6
#define VSSREF__PA__CFG7 CYREG_UDB_PA2_CFG7
#define VSSREF__PA__CFG8 CYREG_UDB_PA2_CFG8
#define VSSREF__PA__CFG9 CYREG_UDB_PA2_CFG9
#define VSSREF__PC CYREG_PRT2_PC
#define VSSREF__PC2 CYREG_PRT2_PC2
#define VSSREF__PORT 2u
#define VSSREF__PS CYREG_PRT2_PS
#define VSSREF__SHIFT 2

/* Miscellaneous */
#define CY_VERSION "PSoC Creator  3.1"
#define CYDEV_BCLK__HFCLK__HZ 24000000U
#define CYDEV_BCLK__HFCLK__KHZ 24000U
#define CYDEV_BCLK__HFCLK__MHZ 24U
#define CYDEV_BCLK__SYSCLK__HZ 24000000U
#define CYDEV_BCLK__SYSCLK__KHZ 24000U
#define CYDEV_BCLK__SYSCLK__MHZ 24U
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PANTHER 6u
#define CYDEV_CHIP_DIE_PSOC4A 3u
#define CYDEV_CHIP_DIE_PSOC5LP 5u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC4
#define CYDEV_CHIP_JTAG_ID 0x04101193u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 3u
#define CYDEV_CHIP_MEMBER_4D 2u
#define CYDEV_CHIP_MEMBER_4F 4u
#define CYDEV_CHIP_MEMBER_5A 6u
#define CYDEV_CHIP_MEMBER_5B 5u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_4A
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PANTHER_ES0 0u
#define CYDEV_CHIP_REV_PANTHER_ES1 1u
#define CYDEV_CHIP_REV_PANTHER_PRODUCTION 1u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_4A_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_READ_ACCELERATOR 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_PROTECT_KILL 4
#define CYDEV_DEBUG_PROTECT_OPEN 1
#define CYDEV_DEBUG_PROTECT CYDEV_DEBUG_PROTECT_OPEN
#define CYDEV_DEBUG_PROTECT_PROTECTED 2
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_HEAP_SIZE 0x0100
#define CYDEV_PROJ_TYPE 2
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_STACK_SIZE 0x0400
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 1
#define CYDEV_VDD 3.3
#define CYDEV_VDD_MV 3300
#define CYIPBLOCK_M0S8_CTBM_VERSION 0
#define CYIPBLOCK_m0s8cpuss_VERSION 0
#define CYIPBLOCK_m0s8gpio2_VERSION 0
#define CYIPBLOCK_m0s8hsiom4a_VERSION 0
#define CYIPBLOCK_m0s8lpcomp_VERSION 0
#define CYIPBLOCK_m0s8pclk_VERSION 0
#define CYIPBLOCK_m0s8sar_VERSION 0
#define CYIPBLOCK_m0s8scb_VERSION 0
#define CYIPBLOCK_m0s8srssv2_VERSION 1
#define CYIPBLOCK_m0s8tcpwm_VERSION 0
#define CYIPBLOCK_m0s8udbif_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 2
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
