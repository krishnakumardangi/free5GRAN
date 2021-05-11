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

#ifndef	_FeatureSetDownlinkPerCC_H_
#define	_FeatureSetDownlinkPerCC_H_


#include "asn_application.h"

/* Including external dependencies */
#include "SubcarrierSpacing.h"
#include "SupportedBandwidth.h"
#include "NativeEnumerated.h"
#include "MIMO-LayersDL.h"
#include "ModulationOrder.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FeatureSetDownlinkPerCC__channelBW_90mhz {
	FeatureSetDownlinkPerCC__channelBW_90mhz_supported	= 0
} e_FeatureSetDownlinkPerCC__channelBW_90mhz;

/* FeatureSetDownlinkPerCC */
typedef struct FeatureSetDownlinkPerCC {
	SubcarrierSpacing_t	 supportedSubcarrierSpacingDL;
	SupportedBandwidth_t	 supportedBandwidthDL;
	long	*channelBW_90mhz;	/* OPTIONAL */
	MIMO_LayersDL_t	*maxNumberMIMO_LayersPDSCH;	/* OPTIONAL */
	ModulationOrder_t	*supportedModulationOrderDL;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FeatureSetDownlinkPerCC_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_channelBW_90mhz_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_FeatureSetDownlinkPerCC;
extern asn_SEQUENCE_specifics_t asn_SPC_FeatureSetDownlinkPerCC_specs_1;
extern asn_TYPE_member_t asn_MBR_FeatureSetDownlinkPerCC_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _FeatureSetDownlinkPerCC_H_ */
#include "asn_internal.h"
