void __thiscall sub_6F7CFE41(int this, int a2, int a3, int a4, int a5, int a6, _BYTE *a7, int a8, int a9, int a10, int a11, int a12, const char *a13, int a14, int a15, int a16, int a17, int a18, int a19)
{
  _BYTE *v19; // eax@5
  int v20; // eax@5
  bool v21; // zf@5
  _BYTE *v22; // edx@5
  int v23; // edx@5
  _BYTE *v24; // edx@5
  int v25; // edx@5
  _BYTE *v26; // edx@5
  int v27; // eax@5
  int v28; // edx@5
  int v29; // eax@1
  int v30; // edi@1
  int v31; // eax@3
  int (*v32)(void); // eax@3
  int v33; // eax@4
  int v34; // ecx@5
  int retaddr; // [sp+0h] [bp+0h]@4

  v29 = sub_6F7CC220(*(_DWORD *)(this + 20), (int)&a7, -5);
  JUMPOUT(v29, -3, sub_6F7CFFA4);
  JUMPOUT(v29, 0, sub_6F7CFF6B);
  JUMPOUT(v29, 1, sub_6F7CFFFA);
  v30 = *(_DWORD *)(a14 + 20);
  if ( a14 != -4 )
    *(_DWORD *)(a14 + 4) = *(_DWORD *)(v30 + 60);
  JUMPOUT(*(_DWORD *)v30 - 4, 1, sub_6F7CFFE1);
  JUMPOUT(*(_DWORD *)v30, 6, sub_6F7CFFCA);
  v31 = *(_DWORD *)(v30 + 40);
  *(_DWORD *)v30 = 0;
  *(_DWORD *)(v30 + 28) = 0;
  *(_DWORD *)(v30 + 32) = 0;
  *(_DWORD *)(v30 + 52) = v31;
  *(_DWORD *)(v30 + 48) = v31;
  v32 = *(int (**)(void))(v30 + 56);
  if ( v32 )
  {
    retaddr = 0;
    v33 = v32();
    *(_DWORD *)(v30 + 60) = v33;
    a19 = v33;
  }
  v34 = a14;
  JUMPOUT(*(_DWORD *)(a14 + 12), 0, sub_6F7CFF60);
  *(_DWORD *)a14 = 8;
  JUMPOUT(a8, 0, sub_6F7CFF6B);
  v26 = a7;
  ++a9;
  v27 = --a8;
  ++a7;
  v28 = *v26;
  *(_DWORD *)v34 = 9;
  *(_DWORD *)(v34 + 8) = v28 << 24;
  JUMPOUT(v27, 0, &loc_6F7CFFBE);
  v22 = a7;
  ++a9;
  a8 = --v27;
  ++a7;
  v23 = *v22;
  *(_DWORD *)v34 = 10;
  *(_DWORD *)(v34 + 8) += v23 << 16;
  JUMPOUT(v27, 0, &loc_6F7CFFBE);
  v24 = a7;
  --v27;
  ++a9;
  a8 = v27;
  ++a7;
  v25 = *v24;
  *(_DWORD *)v34 = 11;
  *(_DWORD *)(v34 + 8) += v25 << 8;
  JUMPOUT(v27, 0, &loc_6F7CFFBE);
  ++a9;
  a8 = v27 - 1;
  v19 = a7++;
  v20 = *(_DWORD *)(v34 + 8) + *v19;
  v21 = v20 == *(_DWORD *)(v34 + 4);
  *(_DWORD *)(v34 + 8) = v20;
  JUMPOUT(v21, sub_6F7CFF60);
  *(_DWORD *)v34 = 13;
  a13 = "incorrect data check";
  *(_DWORD *)(v34 + 4) = 5;
  JUMPOUT(&loc_6F7CFB71);
}
