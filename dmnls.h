#ifndef _DR_NLS_H_
#define _DR_NLS_H_

#include <ntifs.h>
#include <windef.h>
#include <ntstrsafe.h>
#include <ntimage.h>

#ifdef __cplusplus
extern "C" {
#endif

    BOOLEAN NTAPI
        IsNameInExpression(
            __in PUNICODE_STRING Expression,
            __in PUNICODE_STRING Name,
            __in BOOLEAN IgnoreCase,
            __in_opt PWCH UpcaseTable);

#ifdef __cplusplus
}
#endif

#endif
