unsigned int __usercall sub_6F690330@<eax>(_WORD *a1@<eax>, unsigned int *a2@<edx>, int a3@<ecx>, int a4)
{
  _WORD *v4; // esi@1
  unsigned int result; // eax@1
  int v6; // ecx@2
  signed int v7; // edx@2
  signed int v8; // ebx@3
  signed int v9; // edi@3
  unsigned int v10; // eax@3
  int v11; // ebx@3
  unsigned int *v12; // [sp+18h] [bp-24h]@1

  v4 = a1;
  v12 = a2;
  result = dword_6FBBFE48(a3, a4);
  if ( BYTE3(result) & 0x40 )
  {
    v6 = BYTE3(result);
    v7 = (unsigned __int8)(result >> 16);
    if ( (unsigned int)BYTE3(result) >> 7 )
    {
      v8 = (signed int)BYTE1(result) >> 1;
      v9 = (signed int)(unsigned __int8)result >> 1;
      *v4 = ((v9 + (dword_6FBBFE50[4 * *v4] >> 1)) >> 3) & 0x1F | (((unsigned __int16)(v7 >> 1)
                                                                  + (unsigned __int16)(dword_6FBBFE58[4 * *v4] >> 1)) << 7) & 0x7C00 | 4 * (v8 + (dword_6FBBFE50[4 * *v4 + 1] >> 1)) & 0x3E0 | 0x8000;
      v10 = *v12;
      v11 = ((signed int)BYTE1(v10) >> 1) + v8;
      result = v9 + (((signed int)*v12 >> 1) & 0x7F);
      *v12 = result | (((v7 >> 1) + ((*v12 >> 17) & 0x7F)) << 16) | (v11 << 8) | (v6 << 24);
    }
    else
    {
      *v4 = ((_WORD)v7 << 7) & 0x7C00 | 4 * BYTE1(result) & 0x3E0 | ((signed int)(unsigned __int8)result >> 3);
      *v12 = result;
    }
  }
  return result;
}
