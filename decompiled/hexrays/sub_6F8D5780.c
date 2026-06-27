__int64 __thiscall sub_6F8D5780(void *this, int a2, int a3, int a4, int a5, int a6, _TBYTE a7)
{
  void *v7; // esp@1
  int v8; // eax@1
  unsigned int v9; // eax@2
  void *v10; // esp@2
  char v11; // al@3
  int (__stdcall *v12)(const void *, int, void *); // edx@5
  __int64 v13; // rax@8
  _DWORD *v15; // [sp+0h] [bp-A8h]@1
  _DWORD *v16; // [sp+4h] [bp-A4h]@7
  int v17; // [sp+8h] [bp-A0h]@7
  int v18; // [sp+Ch] [bp-9Ch]@7
  int *v19; // [sp+10h] [bp-98h]@7
  _TBYTE v20; // [sp+14h] [bp-94h]@1
  void *v21; // [sp+2Ch] [bp-7Ch]@2
  char v22; // [sp+2Fh] [bp-79h]@1
  int v23; // [sp+30h] [bp-78h]@1
  int v24; // [sp+34h] [bp-74h]@1
  void *v25; // [sp+38h] [bp-70h]@1
  _DWORD *v26; // [sp+3Ch] [bp-6Ch]@1
  __int64 v27; // [sp+40h] [bp-68h]@1
  int v28; // [sp+48h] [bp-60h]@1
  char v29; // [sp+4Ch] [bp-5Ch]@1
  int v30; // [sp+50h] [bp-58h]@1
  int (__cdecl *v31)(int, int, __int64, void (**)(void), int *); // [sp+64h] [bp-44h]@1
  int *v32; // [sp+68h] [bp-40h]@1
  char *v33; // [sp+6Ch] [bp-3Ch]@1
  int (*v34)(); // [sp+70h] [bp-38h]@1
  int *v35; // [sp+74h] [bp-34h]@1
  char v36; // [sp+84h] [bp-24h]@1
  char *v37; // [sp+88h] [bp-20h]@1
  char v38; // [sp+90h] [bp-18h]@3
  char v39; // [sp+A0h] [bp-8h]@1

  v25 = this;
  v35 = (int *)&v15;
  v24 = a4;
  v31 = sub_6F962A50;
  v23 = a6;
  v33 = &v39;
  v32 = dword_6F96B778;
  v34 = sub_6F8D59DD;
  sub_6F8A1A60((int *)&v29);
  sub_6F938240(&v36, (volatile signed __int32 **)(a5 + 108));
  v30 = 1;
  v28 = sub_6F95DC10((int)&v36);
  sub_6F8A13B0(0x50u, (char)v15);
  v7 = alloca(80);
  v35 = (int *)&v15;
  LODWORD(v27) = (unsigned int)&v22 & 0xFFFFFFF0;
  v26 = (_DWORD *)((unsigned int)&v22 & 0xFFFFFFF0);
  v37 = (char *)sub_6F937FA0();
  *(double *)&v20 = *(double *)&a7;
  v8 = sub_6F959F20((int)&v37, v27, 64, (int)"%.*Lf", 0);
  LODWORD(v27) = v8;
  if ( v8 > 63 )
  {
    LODWORD(v27) = v8 + 1;
    v9 = 16 * ((unsigned int)(v8 + 28) >> 4);
    sub_6F8A13B0(v9, (char)v15);
    v10 = alloca(v9);
    v35 = (int *)&v15;
    v21 = (void *)((unsigned int)&v22 & 0xFFFFFFF0);
    v26 = (_DWORD *)((unsigned int)&v22 & 0xFFFFFFF0);
    v37 = (char *)sub_6F937FA0();
    *(double *)&v20 = *(double *)&a7;
    LODWORD(v27) = sub_6F959F20((int)&v37, (int)v21, v27, (int)"%.*Lf", 0);
  }
  v37 = &v38;
  v30 = 1;
  sub_6F93A430((void **)&v37, v27, 0);
  v21 = v37;
  v11 = *(_BYTE *)(v28 + 28);
  if ( v11 == 1 )
    goto LABEL_6;
  if ( v11 )
  {
    v12 = *(int (__stdcall **)(const void *, int, void *))(*(_DWORD *)v28 + 28);
    if ( v12 == sub_6F8C3630 )
    {
LABEL_6:
      memcpy(v21, v26, v27);
      goto LABEL_7;
    }
  }
  else
  {
    v30 = 2;
    sub_6F8C33B0(v28);
    v12 = *(int (__stdcall **)(const void *, int, void *))(*(_DWORD *)v28 + 28);
    if ( v12 == sub_6F8C3630 )
      goto LABEL_6;
  }
  v17 = (int)v21;
  v15 = v26;
  v16 = (_DWORD *)((char *)v26 + v27);
  v30 = 2;
  ((void (__thiscall *)(int))v12)(v28);
LABEL_7:
  v19 = (int *)&v37;
  v18 = (char)v23;
  v17 = a5;
  v15 = (_DWORD *)a2;
  v16 = (_DWORD *)a3;
  v30 = 2;
  if ( (_BYTE)v24 )
    LODWORD(v13) = sub_6F8D64B0(v15, (int)v16, v17, v18, (int)v19);
  else
    LODWORD(v13) = sub_6F8D5A30(v15, (int)v16, v17, v18, (int)v19);
  v27 = v13;
  if ( v37 != &v38 )
    j_free_1(v37);
  sub_6F938380((volatile signed __int32 **)&v36);
  sub_6F8A1AD0((int *)&v29);
  return v27;
}
