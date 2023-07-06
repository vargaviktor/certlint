/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "asn1/rfc3280-PKIX1Explicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER`
 */

#ifndef	_ExtendedNetworkAddress_H_
#define	_ExtendedNetworkAddress_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PresentationAddress.h"
#include <NumericString.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ExtendedNetworkAddress_PR {
	ExtendedNetworkAddress_PR_NOTHING,	/* No components present */
	ExtendedNetworkAddress_PR_e163_4_address,
	ExtendedNetworkAddress_PR_psap_address
} ExtendedNetworkAddress_PR;

/* ExtendedNetworkAddress */
typedef struct ExtendedNetworkAddress {
	ExtendedNetworkAddress_PR present;
	union ExtendedNetworkAddress_u {
		struct ExtendedNetworkAddress__e163_4_address {
			NumericString_t	 number;
			NumericString_t	*sub_address	/* OPTIONAL */;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} e163_4_address;
		PresentationAddress_t	 psap_address;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ExtendedNetworkAddress_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ExtendedNetworkAddress;

#ifdef __cplusplus
}
#endif

#endif	/* _ExtendedNetworkAddress_H_ */
#include <asn_internal.h>
