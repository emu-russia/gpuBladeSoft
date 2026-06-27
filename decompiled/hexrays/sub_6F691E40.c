int __usercall sub_6F691E40@<eax>(int result@<eax>, int *a2@<edx>, int a3@<ecx>, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int *v7; // edi@1
  _WORD *v8; // ebx@2
  __int64 v9; // rax@2
  signed int v10; // ecx@2
  int v11; // [sp+20h] [bp-3Ch]@2
  int v12; // [sp+24h] [bp-38h]@2
  int v13; // [sp+28h] [bp-34h]@2

  v7 = a2;
  if ( *(_WORD *)result >= 0 )
  {
    v8 = (_WORD *)result;
    v12 = a6;
    v11 = a5;
    v13 = a7;
    dword_6FCFFE50(a3, a4, &v11);
    v9 = (v13 & ~(v13 >> 31)) - 255;
    LODWORD(v9) = HIDWORD(v9) & v9;
    HIDWORD(v9) = 16 * *v8;
    *v8 = ((((unsigned __int16)((unsigned __int64)(*(int *)((char *)dword_6FBBFE58 + HIDWORD(v9)) + (signed int)v9) >> 32) & (unsigned __int16)(*(_WORD *)((char *)dword_6FBBFE58 + HIDWORD(v9)) + v9))
          + 255) << 7) & 0x7C00 | (4
                                 * (((*(int *)((char *)dword_6FBBFE54 + HIDWORD(v9))
                                    + (((v12 & ~(v12 >> 31)) - 255) & (((v12 & ~(v12 >> 31)) - 255) >> 31))) >> 31) & (*(_WORD *)((char *)dword_6FBBFE54 + HIDWORD(v9)) + (((v12 & ~(v12 >> 31)) - 255) & (((v12 & ~(v12 >> 31)) - 255) >> 31))))
                                 + 1020) & 0x3E0 | (((((*(int *)((char *)dword_6FBBFE50 + HIDWORD(v9))
                                                      + (((~(v11 >> 31) & v11) - 255) & (((~(v11 >> 31) & v11) - 255) >> 31))) >> 31) & (*(int *)((char *)dword_6FBBFE50 + HIDWORD(v9)) + (((~(v11 >> 31) & v11) - 255) & (((~(v11 >> 31) & v11) - 255) >> 31))))
                                                   + 255) >> 3) & 0x1F;
    HIDWORD(v9) = *v7;
    v10 = a5 + (unsigned __int8)*v7 - 255;
    result = (((a7 + (unsigned __int8)((unsigned int)*v7 >> 16) - 255) & ((a7
                                                                         + (unsigned __int8)((unsigned int)*v7 >> 16)
                                                                         - 255) >> 31))
            + 255) << 16;
    *v7 = (((v10 >> 31) & v10) + 255) | result | (((((a6 + BYTE5(v9) - 255) >> 31) & (a6 + BYTE5(v9) - 255)) + 255) << 8);
    *v8 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  }
  return result;
}
