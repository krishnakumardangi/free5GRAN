/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_FrequencyInfoUL_H_
#define	_FrequencyInfoUL_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ARFCN-ValueNR.h"
#include "AdditionalSpectrumEmission.h"
#include "P-Max.h"
#include "NativeEnumerated.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FrequencyInfoUL__frequencyShift7p5khz {
	FrequencyInfoUL__frequencyShift7p5khz_true	= 0
} e_FrequencyInfoUL__frequencyShift7p5khz;

/* Forward declarations */
struct MultiFrequencyBandListNR;
struct SCS_SpecificCarrier;

/* FrequencyInfoUL */
typedef struct FrequencyInfoUL {
	struct MultiFrequencyBandListNR	*frequencyBandList	/* OPTIONAL */;
	ARFCN_ValueNR_t	*absoluteFrequencyPointA	/* OPTIONAL */;
	struct FrequencyInfoUL__scs_SpecificCarrierList {
		A_SEQUENCE_OF(struct SCS_SpecificCarrier) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} scs_SpecificCarrierList;
	AdditionalSpectrumEmission_t	*additionalSpectrumEmission	/* OPTIONAL */;
	P_Max_t	*p_Max	/* OPTIONAL */;
	long	*frequencyShift7p5khz	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FrequencyInfoUL_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_frequencyShift7p5khz_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_FrequencyInfoUL;
extern asn_SEQUENCE_specifics_t asn_SPC_FrequencyInfoUL_specs_1;
extern asn_TYPE_member_t asn_MBR_FrequencyInfoUL_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MultiFrequencyBandListNR.h"
#include "SCS-SpecificCarrier.h"

#endif	/* _FrequencyInfoUL_H_ */
#include "asn_internal.h"