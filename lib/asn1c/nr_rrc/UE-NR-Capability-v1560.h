/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_UE_NR_Capability_v1560_H_
#define	_UE_NR_Capability_v1560_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NRDC_Parameters;
struct UE_NR_Capability_v1570;

/* UE-NR-Capability-v1560 */
typedef struct UE_NR_Capability_v1560 {
	struct NRDC_Parameters	*nrdc_Parameters	/* OPTIONAL */;
	OCTET_STRING_t	*receivedFilters	/* OPTIONAL */;
	struct UE_NR_Capability_v1570	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_NR_Capability_v1560_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_NR_Capability_v1560;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_NR_Capability_v1560_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_NR_Capability_v1560_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NRDC-Parameters.h"
#include "UE-NR-Capability-v1570.h"

#endif	/* _UE_NR_Capability_v1560_H_ */
#include "asn_internal.h"