__int16 __usercall sub_6F6919A0@<ax>(__int64 a1@<edx:eax>, int a2@<ecx>, int a3, unsigned __int8 a4, unsigned __int8 a5, unsigned __int8 a6)
{
  int *v6; // esi@2
  _WORD *v7; // ST10_4@2
  int v8; // edi@2
  signed int v9; // ebp@2
  __int64 v10; // rax@2
  int v12; // [sp+20h] [bp-3Ch]@2
  int v13; // [sp+24h] [bp-38h]@2
  int v14; // [sp+28h] [bp-34h]@2

  if ( *(_WORD *)a1 >= 0 )
  {
    v6 = (int *)HIDWORD(a1);
    v7 = (_WORD *)a1;
    v12 = a4;
    v13 = a5;
    v14 = a6;
    dword_6FCFFE50(a2, a3, &v12);
    v8 = 4 * *v7;
    v9 = dword_6FBBFE50[v8];
    v10 = (v14 & ~(v14 >> 31)) - 255;
    a1 = ((signed int)((HIDWORD(v10) & v10) + 255) >> 1) + (dword_6FBBFE50[v8 + 2] >> 1) - 255;
    LOWORD(a1) = (((WORD2(a1) & (unsigned __int16)a1) + 255) << 7) & 0x7C00;
    *v7 = a1 | (4
              * ((((((((v13 & ~(v13 >> 31)) - 255) & (((v13 & ~(v13 >> 31)) - 255) >> 31)) + 255) >> 1)
                 + (dword_6FBBFE54[v8] >> 1)
                 - 255) >> 31) & ((((((v13 & ~(v13 >> 31)) - 255) & (((v13 & ~(v13 >> 31)) - 255) >> 31)) + 255) >> 1)
                                + (dword_6FBBFE54[v8] >> 1)
                                - 255))
              + 1020) & 0x3E0 | (((((((((((v12 & ~(v12 >> 31)) - 255) >> 31) & ((v12 & ~(v12 >> 31)) - 255)) + 255) >> 1)
                                   + (v9 >> 1)
                                   - 255) >> 31) & (((((((v12 & ~(v12 >> 31)) - 255) >> 31) & ((v12 & ~(v12 >> 31)) - 255))
                                                    + 255) >> 1)
                                                  + (v9 >> 1)
                                                  - 255))
                                + 255) >> 3) & 0x1F;
    HIDWORD(a1) = *v6;
    *v6 = (((signed int)a4 >> 1) + ((*v6 >> 1) & 0x7F)) | ((((signed int)a5 >> 1) + ((signed int)BYTE5(a1) >> 1)) << 8) | ((((signed int)a6 >> 1) + (((unsigned int)*v6 >> 17) & 0x7F)) << 16);
  }
  return a1;
}
