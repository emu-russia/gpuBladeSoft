unsigned int __usercall sub_6F690560@<eax>(_WORD *a1@<eax>, unsigned int *a2@<edx>, int a3@<ecx>, int a4)
{
  unsigned int *v4; // edi@1
  _WORD *v5; // esi@1
  unsigned int result; // eax@1
  int v7; // ecx@2
  int v8; // eax@3
  int *v9; // ebp@3
  unsigned int v10; // ebx@3
  int v11; // [sp+14h] [bp-38h]@2
  int v12; // [sp+18h] [bp-34h]@2
  int v13; // [sp+1Ch] [bp-30h]@2

  v4 = a2;
  v5 = a1;
  result = dword_6FBBFE48(a3, a4);
  if ( BYTE3(result) & 0x40 )
  {
    v7 = BYTE1(result);
    v11 = (unsigned __int8)result;
    v13 = BYTE3(result);
    v12 = (unsigned __int8)(result >> 16);
    if ( (unsigned int)BYTE3(result) >> 7 )
    {
      v8 = 4 * *v5;
      v9 = &dword_6FBBFE50[v8];
      *v5 = (4 * ((v7 + *((_WORD *)v9 + 2) - 255) & ((v7 + v9[1] - 255) >> 31)) + 1020) & 0x3E0 | ((((unsigned __int16)(*((_WORD *)v9 + 4) + v12 - 255) & (unsigned __int16)((v9[2] + v12 - 255) >> 31))
                                                                                                  + 255) << 7) & 0x7C00 | ((((dword_6FBBFE50[v8] + v11 - 255) & ((dword_6FBBFE50[v8] + v11 - 255) >> 31)) + 255) >> 3) & 0x1F | 0x8000;
      v10 = *v4;
      result = (v11 + (unsigned __int8)*v4 - 255) >> 31;
      *v4 = (v13 << 24) | ((result & (v11 + (unsigned __int8)*v4 - 255)) + 255) | ((((v12
                                                                                    + (unsigned __int8)(*v4 >> 16)
                                                                                    - 255) & ((v12
                                                                                             + (unsigned __int8)(*v4 >> 16)
                                                                                             - 255) >> 31))
                                                                                  + 255) << 16) | (((((v7 + BYTE1(v10) - 255) >> 31) & (v7 + BYTE1(v10) - 255))
                                                                                                  + 255) << 8);
    }
    else
    {
      *v5 = ((unsigned __int8)(result >> 16) << 7) & 0x7C00 | 4 * BYTE1(result) & 0x3E0 | ((signed int)(unsigned __int8)result >> 3);
      *v4 = result;
    }
  }
  return result;
}
