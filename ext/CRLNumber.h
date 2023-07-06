/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Implicit88"
 * 	found in "asn1/rfc3280-PKIX1Implicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER`
 */

#ifndef	_CRLNumber_H_
#define	_CRLNumber_H_


#include <asn_application.h>

/* Including external dependencies */
#include <INTEGER.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CRLNumber */
typedef INTEGER_t	 CRLNumber_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CRLNumber;
asn_struct_free_f CRLNumber_free;
asn_struct_print_f CRLNumber_print;
asn_constr_check_f CRLNumber_constraint;
ber_type_decoder_f CRLNumber_decode_ber;
der_type_encoder_f CRLNumber_encode_der;
xer_type_decoder_f CRLNumber_decode_xer;
xer_type_encoder_f CRLNumber_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _CRLNumber_H_ */
#include <asn_internal.h>
