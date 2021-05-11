/*
 * Copyright 2020-2021 Telecom Paris
   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at
       http://www.apache.org/licenses/LICENSE-2.0
   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
 */
/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	`asn1c -gen-PER -fcompound-names -findirect-choice -no-gen-example`
 */

#ifndef	_MeasurementTimingConfiguration_H_
#define	_MeasurementTimingConfiguration_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NULL.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasurementTimingConfiguration__criticalExtensions_PR {
	MeasurementTimingConfiguration__criticalExtensions_PR_NOTHING,	/* No components present */
	MeasurementTimingConfiguration__criticalExtensions_PR_c1,
	MeasurementTimingConfiguration__criticalExtensions_PR_criticalExtensionsFuture
} MeasurementTimingConfiguration__criticalExtensions_PR;
typedef enum MeasurementTimingConfiguration__criticalExtensions__c1_PR {
	MeasurementTimingConfiguration__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	MeasurementTimingConfiguration__criticalExtensions__c1_PR_measTimingConf,
	MeasurementTimingConfiguration__criticalExtensions__c1_PR_spare3,
	MeasurementTimingConfiguration__criticalExtensions__c1_PR_spare2,
	MeasurementTimingConfiguration__criticalExtensions__c1_PR_spare1
} MeasurementTimingConfiguration__criticalExtensions__c1_PR;

/* Forward declarations */
struct MeasurementTimingConfiguration_IEs;

/* MeasurementTimingConfiguration */
typedef struct MeasurementTimingConfiguration {
	struct MeasurementTimingConfiguration__criticalExtensions {
		MeasurementTimingConfiguration__criticalExtensions_PR present;
		union MeasurementTimingConfiguration__criticalExtensions_u {
			struct MeasurementTimingConfiguration__criticalExtensions__c1 {
				MeasurementTimingConfiguration__criticalExtensions__c1_PR present;
				union MeasurementTimingConfiguration__criticalExtensions__c1_u {
					struct MeasurementTimingConfiguration_IEs	*measTimingConf;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *c1;
			struct MeasurementTimingConfiguration__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasurementTimingConfiguration_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasurementTimingConfiguration;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasurementTimingConfiguration-IEs.h"

#endif	/* _MeasurementTimingConfiguration_H_ */
#include "asn_internal.h"