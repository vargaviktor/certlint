/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Implicit88"
 * 	found in "asn1/rfc3280-PKIX1Implicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER`
 */

#ifndef	_CPSuri_H_
#define	_CPSuri_H_


#include <asn_application.h>

/* Including external dependencies */
#include <IA5String.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CPSuri */
typedef IA5String_t	 CPSuri_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CPSuri;
asn_struct_free_f CPSuri_free;
asn_struct_print_f CPSuri_print;
asn_constr_check_f CPSuri_constraint;
ber_type_decoder_f CPSuri_decode_ber;
der_type_encoder_f CPSuri_encode_der;
xer_type_decoder_f CPSuri_decode_xer;
xer_type_encoder_f CPSuri_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _CPSuri_H_ */
#include <asn_internal.h>
