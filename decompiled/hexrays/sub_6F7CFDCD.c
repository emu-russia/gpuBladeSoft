void __thiscall sub_6F7CFDCD(int this, int a2, int a3, int a4, int a5, int a6, _BYTE *a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19)
{
  _BYTE *v19; // eax@3
  int v20; // eax@3
  _BYTE *v21; // edx@4
  int v22; // eax@4
  int v23; // edx@4
  _BYTE *v24; // edx@7
  int v25; // eax@7
  int v26; // edx@7
  _BYTE *v27; // edx@1
  int v28; // eax@1
  int v29; // edx@1

  JUMPOUT(a8, 0, sub_6F7CFF52);
  v27 = a7;
  ++a9;
  v28 = --a8;
  ++a7;
  v29 = *v27;
  *(_DWORD *)this = 3;
  *(_DWORD *)(this + 8) = v29 << 24;
  if ( !v28
    || (v24 = a7,
        ++a9,
        v25 = v28 - 1,
        a8 = v25,
        ++a7,
        v26 = *v24,
        *(_DWORD *)this = 4,
        *(_DWORD *)(this + 8) += v26 << 16,
        !v25)
    || (v21 = a7,
        ++a9,
        v22 = v25 - 1,
        a8 = v22,
        ++a7,
        v23 = *v21,
        *(_DWORD *)this = 5,
        *(_DWORD *)(this + 8) += v23 << 8,
        !v22) )
  {
    sub_6F7CBF90((int)&a7);
    JUMPOUT(&loc_6F7CFB85);
  }
  ++a9;
  a8 = v22 - 1;
  v19 = a7++;
  v20 = *(_DWORD *)(this + 8) + *v19;
  *(_DWORD *)(this + 8) = v20;
  a19 = v20;
  *(_DWORD *)this = 6;
  JUMPOUT(&loc_6F7CFB76);
}
