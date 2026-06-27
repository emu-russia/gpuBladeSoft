__int64 __thiscall sub_6F8FA890(void *this, int a2, int a3, int a4, int a5, int a6, _TBYTE a7)
{
  void *v7; // esp@1
  int v8; // eax@1
  unsigned int v9; // eax@2
  void *v10; // esp@2
  char v11; // al@5
  int (__stdcall *v12)(const void *, int, void *); // edx@7
  __int64 v13; // rax@10
  char *v14; // ecx@11
  _DWORD *v16; // [sp+0h] [bp-98h]@1
  _DWORD *v17; // [sp+4h] [bp-94h]@9
  int v18; // [sp+8h] [bp-90h]@9
  int v19; // [sp+Ch] [bp-8Ch]@9
  unsigned int *v20; // [sp+10h] [bp-88h]@9
  _TBYTE v21; // [sp+14h] [bp-84h]@1
  int v22; // [sp+2Ch] [bp-6Ch]@1
  int v23; // [sp+30h] [bp-68h]@1
  void *v24; // [sp+34h] [bp-64h]@1
  void *v25; // [sp+38h] [bp-60h]@2
  _DWORD *v26; // [sp+3Ch] [bp-5Ch]@1
  __int64 v27; // [sp+40h] [bp-58h]@1
  int v28; // [sp+48h] [bp-50h]@1
  char v29; // [sp+4Ch] [bp-4Ch]@1
  int v30; // [sp+50h] [bp-48h]@1
  int (__cdecl *v31)(int, int, __int64, void (**)(void), int *); // [sp+64h] [bp-34h]@1
  int *v32; // [sp+68h] [bp-30h]@1
  char *v33; // [sp+6Ch] [bp-2Ch]@1
  int (*v34)(); // [sp+70h] [bp-28h]@1
  int *v35; // [sp+74h] [bp-24h]@1
  char v36; // [sp+87h] [bp-11h]@3
  char v37; // [sp+88h] [bp-10h]@1
  void *v38; // [sp+8Ch] [bp-Ch]@1
  char v39; // [sp+90h] [bp-8h]@1

  v24 = this;
  v35 = (int *)&v16;
  v23 = a4;
  v31 = sub_6F962A50;
  v22 = a6;
  v33 = &v39;
  v32 = dword_6F96B5CC;
  v34 = sub_6F8FAB36;
  sub_6F8A1A60((int *)&v29);
  sub_6F938240(&v37, (volatile signed __int32 **)(a5 + 108));
  v30 = 1;
  v28 = sub_6F95DC10((int)&v37);
  sub_6F8A13B0(0x50u, (char)v16);
  v7 = alloca(80);
  v35 = (int *)&v16;
  LODWORD(v27) = ((unsigned int)&v22 + 3) & 0xFFFFFFF0;
  v26 = (_DWORD *)(((unsigned int)&v22 + 3) & 0xFFFFFFF0);
  v38 = (void *)sub_6F937FA0();
  *(double *)&v21 = *(double *)&a7;
  v8 = sub_6F959F20((int)&v38, v27, 64, (int)"%.*Lf", 0);
  LODWORD(v27) = v8;
  if ( v8 > 63 )
  {
    LODWORD(v27) = v8 + 1;
    v9 = 16 * ((unsigned int)(v8 + 28) >> 4);
    sub_6F8A13B0(v9, (char)v16);
    v10 = alloca(v9);
    v35 = (int *)&v16;
    v25 = (void *)(((unsigned int)&v22 + 3) & 0xFFFFFFF0);
    v26 = (_DWORD *)(((unsigned int)&v22 + 3) & 0xFFFFFFF0);
    v38 = (void *)sub_6F937FA0();
    *(double *)&v21 = *(double *)&a7;
    LODWORD(v27) = sub_6F959F20((int)&v38, (int)v25, v27, (int)"%.*Lf", 0);
  }
  v30 = 1;
  sub_6F909FC0((int *)&v38, v27, 0, (int)&v36);
  v25 = v38;
  if ( *((_DWORD *)v38 - 1) >= 0 )
  {
    v30 = 2;
    sub_6F908160((int *)&v38);
    v25 = v38;
  }
  v11 = *(_BYTE *)(v28 + 28);
  if ( v11 == 1 )
    goto LABEL_8;
  if ( v11 )
  {
    v12 = *(int (__stdcall **)(const void *, int, void *))(*(_DWORD *)v28 + 28);
    if ( v12 == sub_6F8C3630 )
    {
LABEL_8:
      memcpy(v25, v26, v27);
      goto LABEL_9;
    }
  }
  else
  {
    v30 = 2;
    sub_6F8C33B0(v28);
    v12 = *(int (__stdcall **)(const void *, int, void *))(*(_DWORD *)v28 + 28);
    if ( v12 == sub_6F8C3630 )
      goto LABEL_8;
  }
  v18 = (int)v25;
  v16 = v26;
  v17 = (_DWORD *)((char *)v26 + v27);
  v30 = 2;
  ((void (__thiscall *)(int))v12)(v28);
LABEL_9:
  v20 = (unsigned int *)&v38;
  v19 = (char)v22;
  v18 = a5;
  v16 = (_DWORD *)a2;
  v17 = (_DWORD *)a3;
  v30 = 2;
  if ( (_BYTE)v23 )
    LODWORD(v13) = sub_6F8FB3C0(v16, (int)v17, v18, v19, v20);
  else
    LODWORD(v13) = sub_6F8FAB80(v16, (int)v17, v18, v19, v20);
  v27 = v13;
  v14 = (char *)v38;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v38 - 1, 0xFFFFFFFF) <= 0 )
    sub_6F9086D0(v14 - 12, (int)&v36);
  sub_6F938380((volatile signed __int32 **)&v37);
  sub_6F8A1AD0((int *)&v29);
  return v27;
}
