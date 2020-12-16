/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_MeasResultSCG_Failure_H_
#define	_MeasResultSCG_Failure_H_


#include "asn_application.h"

/* Including external dependencies */
#include "MeasResultList2NR.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LocationInfo_r16;

/* MeasResultSCG-Failure */
typedef struct MeasResultSCG_Failure {
	MeasResultList2NR_t	 measResultPerMOList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LocationInfo_r16	*locationInfo_r16	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultSCG_Failure_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultSCG_Failure;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LocationInfo-r16.h"

#endif	/* _MeasResultSCG_Failure_H_ */
#include "asn_internal.h"