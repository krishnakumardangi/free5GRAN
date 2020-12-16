/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_Phy_ParametersXDD_Diff_H_
#define	_Phy_ParametersXDD_Diff_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Phy_ParametersXDD_Diff__dynamicSFI {
	Phy_ParametersXDD_Diff__dynamicSFI_supported	= 0
} e_Phy_ParametersXDD_Diff__dynamicSFI;
typedef enum Phy_ParametersXDD_Diff__twoPUCCH_F0_2_ConsecSymbols {
	Phy_ParametersXDD_Diff__twoPUCCH_F0_2_ConsecSymbols_supported	= 0
} e_Phy_ParametersXDD_Diff__twoPUCCH_F0_2_ConsecSymbols;
typedef enum Phy_ParametersXDD_Diff__twoDifferentTPC_Loop_PUSCH {
	Phy_ParametersXDD_Diff__twoDifferentTPC_Loop_PUSCH_supported	= 0
} e_Phy_ParametersXDD_Diff__twoDifferentTPC_Loop_PUSCH;
typedef enum Phy_ParametersXDD_Diff__twoDifferentTPC_Loop_PUCCH {
	Phy_ParametersXDD_Diff__twoDifferentTPC_Loop_PUCCH_supported	= 0
} e_Phy_ParametersXDD_Diff__twoDifferentTPC_Loop_PUCCH;
typedef enum Phy_ParametersXDD_Diff__dl_SchedulingOffset_PDSCH_TypeA {
	Phy_ParametersXDD_Diff__dl_SchedulingOffset_PDSCH_TypeA_supported	= 0
} e_Phy_ParametersXDD_Diff__dl_SchedulingOffset_PDSCH_TypeA;
typedef enum Phy_ParametersXDD_Diff__dl_SchedulingOffset_PDSCH_TypeB {
	Phy_ParametersXDD_Diff__dl_SchedulingOffset_PDSCH_TypeB_supported	= 0
} e_Phy_ParametersXDD_Diff__dl_SchedulingOffset_PDSCH_TypeB;
typedef enum Phy_ParametersXDD_Diff__ul_SchedulingOffset {
	Phy_ParametersXDD_Diff__ul_SchedulingOffset_supported	= 0
} e_Phy_ParametersXDD_Diff__ul_SchedulingOffset;

/* Phy-ParametersXDD-Diff */
typedef struct Phy_ParametersXDD_Diff {
	long	*dynamicSFI	/* OPTIONAL */;
	long	*twoPUCCH_F0_2_ConsecSymbols	/* OPTIONAL */;
	long	*twoDifferentTPC_Loop_PUSCH	/* OPTIONAL */;
	long	*twoDifferentTPC_Loop_PUCCH	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	long	*dl_SchedulingOffset_PDSCH_TypeA	/* OPTIONAL */;
	long	*dl_SchedulingOffset_PDSCH_TypeB	/* OPTIONAL */;
	long	*ul_SchedulingOffset	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Phy_ParametersXDD_Diff_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_dynamicSFI_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_twoPUCCH_F0_2_ConsecSymbols_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_twoDifferentTPC_Loop_PUSCH_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_twoDifferentTPC_Loop_PUCCH_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_dl_SchedulingOffset_PDSCH_TypeA_11;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_dl_SchedulingOffset_PDSCH_TypeB_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ul_SchedulingOffset_15;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_Phy_ParametersXDD_Diff;
extern asn_SEQUENCE_specifics_t asn_SPC_Phy_ParametersXDD_Diff_specs_1;
extern asn_TYPE_member_t asn_MBR_Phy_ParametersXDD_Diff_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _Phy_ParametersXDD_Diff_H_ */
#include "asn_internal.h"