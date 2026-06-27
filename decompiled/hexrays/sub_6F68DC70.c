signed int __usercall sub_6F68DC70@<eax>(signed int result@<eax>, _DWORD *a2@<edx>, int a3@<ecx>, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  _WORD *v7; // ebx@2
  _DWORD *v8; // ST1C_4@2
  int v9; // edi@2
  signed int v10; // ebp@2
  int v11; // [sp+20h] [bp-3Ch]@2
  int v12; // [sp+24h] [bp-38h]@2
  int v13; // [sp+28h] [bp-34h]@2

  if ( *(_WORD *)result >= 0 )
  {
    v7 = (_WORD *)result;
    v8 = a2;
    v11 = a5;
    v12 = a6;
    v13 = a7;
    dword_6FCFFE50(a3, a4, &v11);
    v9 = 16 * *v7;
    v10 = *(int *)((char *)dword_6FBBFE50 + v9)
        - (((((v11 & ~(v11 >> 31)) - 255) >> 31) & ((v11 & ~(v11 >> 31)) - 255))
         + 255);
    result = *(int *)((char *)&dword_6FBBFE50[2] + v9)
           - (((((v13 & ~(v13 >> 31)) - 255) >> 31) & ((v13 & ~(v13 >> 31)) - 255))
            + 255);
    LOWORD(v9) = (((unsigned __int16)result & (unsigned __int16)~(result >> 31)) << 7) & 0x7C00 | ((~(v10 >> 31) & v10) >> 3) & 0x1F | 4 * ((*(_WORD *)((char *)dword_6FBBFE54 + v9) - (((((v12 & ~(v12 >> 31)) - 255) >> 31) & ((v12 & ~(v12 >> 31)) - 255)) + 255)) & ~((*(int *)((char *)dword_6FBBFE54 + v9) - (((((v12 & ~(v12 >> 31)) - 255) >> 31) & ((v12 & ~(v12 >> 31)) - 255)) + 255)) >> 31)) & 0x3E0;
    *v7 = v9;
    *v8 = dword_6FCBFE50[(signed __int16)v9];
  }
  return result;
}
