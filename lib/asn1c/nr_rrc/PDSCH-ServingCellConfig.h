/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_PDSCH_ServingCellConfig_H_
#define	_PDSCH_ServingCellConfig_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "ServCellIndex.h"
#include "NativeInteger.h"
#include "BOOLEAN.h"
#include "NULL.h"
#include "PDSCH-CodeBlockGroupTransmission.h"
#include "constr_CHOICE.h"
#include "PDSCH-CodeBlockGroupTransmissionList-r16.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PDSCH_ServingCellConfig__codeBlockGroupTransmission_PR {
	PDSCH_ServingCellConfig__codeBlockGroupTransmission_PR_NOTHING,	/* No components present */
	PDSCH_ServingCellConfig__codeBlockGroupTransmission_PR_release,
	PDSCH_ServingCellConfig__codeBlockGroupTransmission_PR_setup
} PDSCH_ServingCellConfig__codeBlockGroupTransmission_PR;
typedef enum PDSCH_ServingCellConfig__xOverhead {
	PDSCH_ServingCellConfig__xOverhead_xOh6	= 0,
	PDSCH_ServingCellConfig__xOverhead_xOh12	= 1,
	PDSCH_ServingCellConfig__xOverhead_xOh18	= 2
} e_PDSCH_ServingCellConfig__xOverhead;
typedef enum PDSCH_ServingCellConfig__nrofHARQ_ProcessesForPDSCH {
	PDSCH_ServingCellConfig__nrofHARQ_ProcessesForPDSCH_n2	= 0,
	PDSCH_ServingCellConfig__nrofHARQ_ProcessesForPDSCH_n4	= 1,
	PDSCH_ServingCellConfig__nrofHARQ_ProcessesForPDSCH_n6	= 2,
	PDSCH_ServingCellConfig__nrofHARQ_ProcessesForPDSCH_n10	= 3,
	PDSCH_ServingCellConfig__nrofHARQ_ProcessesForPDSCH_n12	= 4,
	PDSCH_ServingCellConfig__nrofHARQ_ProcessesForPDSCH_n16	= 5
} e_PDSCH_ServingCellConfig__nrofHARQ_ProcessesForPDSCH;
typedef enum PDSCH_ServingCellConfig__pdsch_CodeBlockGroupTransmissionList_r16_PR {
	PDSCH_ServingCellConfig__pdsch_CodeBlockGroupTransmissionList_r16_PR_NOTHING,	/* No components present */
	PDSCH_ServingCellConfig__pdsch_CodeBlockGroupTransmissionList_r16_PR_release,
	PDSCH_ServingCellConfig__pdsch_CodeBlockGroupTransmissionList_r16_PR_setup
} PDSCH_ServingCellConfig__pdsch_CodeBlockGroupTransmissionList_r16_PR;

/* PDSCH-ServingCellConfig */
typedef struct PDSCH_ServingCellConfig {
	struct PDSCH_ServingCellConfig__codeBlockGroupTransmission {
		PDSCH_ServingCellConfig__codeBlockGroupTransmission_PR present;
		union PDSCH_ServingCellConfig__codeBlockGroupTransmission_u {
			NULL_t	 release;
			PDSCH_CodeBlockGroupTransmission_t	 setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *codeBlockGroupTransmission;
	long	*xOverhead	/* OPTIONAL */;
	long	*nrofHARQ_ProcessesForPDSCH	/* OPTIONAL */;
	ServCellIndex_t	*pucch_Cell	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	long	*maxMIMO_Layers	/* OPTIONAL */;
	BOOLEAN_t	*processingType2Enabled	/* OPTIONAL */;
	struct PDSCH_ServingCellConfig__pdsch_CodeBlockGroupTransmissionList_r16 {
		PDSCH_ServingCellConfig__pdsch_CodeBlockGroupTransmissionList_r16_PR present;
		union PDSCH_ServingCellConfig__pdsch_CodeBlockGroupTransmissionList_r16_u {
			NULL_t	 release;
			PDSCH_CodeBlockGroupTransmissionList_r16_t	 setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *pdsch_CodeBlockGroupTransmissionList_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDSCH_ServingCellConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_xOverhead_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_nrofHARQ_ProcessesForPDSCH_9;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PDSCH_ServingCellConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_PDSCH_ServingCellConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_PDSCH_ServingCellConfig_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _PDSCH_ServingCellConfig_H_ */
#include "asn_internal.h"