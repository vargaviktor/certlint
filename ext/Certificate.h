/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "asn1/rfc3280-PKIX1Explicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER`
 */

#ifndef	_Certificate_H_
#define	_Certificate_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TBSCertificate.h"
#include "AlgorithmIdentifier.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Certificate */
typedef struct Certificate {
	TBSCertificate_t	 tbsCertificate;
	AlgorithmIdentifier_t	 signatureAlgorithm;
	BIT_STRING_t	 signature;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Certificate_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Certificate;

#ifdef __cplusplus
}
#endif

#endif	/* _Certificate_H_ */
#include <asn_internal.h>
