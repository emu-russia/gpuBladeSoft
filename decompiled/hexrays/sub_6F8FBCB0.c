__int64 __thiscall sub_6F8FBCB0(void *this, int a2, int a3, int a4, int a5, int a6, _TBYTE a7)
{
  void *v7; // esp@1
  int v8; // eax@1
  unsigned int v9; // eax@2
  void *v10; // esp@2
  int v11; // eax@3
  int v12; // edx@5
  void (__cdecl *v13)(unsigned int, _DWORD, int); // eax@5
  __int64 v14; // rax@6
  int v15; // ecx@7
  unsigned int v17; // [sp+Ch] [bp-98h]@1
  int v18; // [sp+10h] [bp-94h]@5
  int v19; // [sp+14h] [bp-90h]@5
  _TBYTE v20; // [sp+20h] [bp-84h]@1
  int v21; // [sp+38h] [bp-6Ch]@2
  char v22; // [sp+3Bh] [bp-69h]@1
  int v23; // [sp+3Ch] [bp-68h]@1
  int v24; // [sp+40h] [bp-64h]@1
  void *v25; // [sp+44h] [bp-60h]@1
  int *v26; // [sp+48h] [bp-5Ch]@1
  __int64 v27; // [sp+4Ch] [bp-58h]@1
  unsigned int v28; // [sp+54h] [bp-50h]@1
  char v29; // [sp+58h] [bp-4Ch]@1
  int v30; // [sp+5Ch] [bp-48h]@1
  int (__cdecl *v31)(int, int, __int64, void (**)(void), int *); // [sp+70h] [bp-34h]@1
  int *v32; // [sp+74h] [bp-30h]@1
  char *v33; // [sp+78h] [bp-2Ch]@1
  int (*v34)(); // [sp+7Ch] [bp-28h]@1
  int *v35; // [sp+80h] [bp-24h]@1
  char v36; // [sp+93h] [bp-11h]@3
  char v37; // [sp+94h] [bp-10h]@1
  int v38; // [sp+98h] [bp-Ch]@1
  char v39; // [sp+9Ch] [bp-8h]@1

  v25 = this;
  v35 = (int *)&v17;
  v24 = a4;
  v31 = sub_6F962A50;
  v23 = a6;
  v33 = &v39;
  v32 = dword_6F96B12C;
  v34 = sub_6F8FBF16;
  sub_6F8A1A60((int *)&v29);
  sub_6F938240(&v37, (volatile signed __int32 **)(a5 + 108));
  v30 = 1;
  v26 = (int *)sub_6F95DC70((int)&v37);
  sub_6F8A13B0(0x50u, v17);
  v7 = alloca(80);
  v35 = (int *)&v17;
  LODWORD(v27) = (unsigned int)&v22 & 0xFFFFFFF0;
  v28 = (unsigned int)&v22 & 0xFFFFFFF0;
  v38 = sub_6F937FA0();
  *(double *)&v20 = *(double *)&a7;
  v8 = sub_6F959F20((int)&v38, v27, 64, (int)"%.*Lf", 0);
  LODWORD(v27) = v8;
  if ( v8 > 63 )
  {
    LODWORD(v27) = v8 + 1;
    v9 = 16 * ((unsigned int)(v8 + 28) >> 4);
    sub_6F8A13B0(v9, v17);
    v10 = alloca(v9);
    v35 = (int *)&v17;
    v21 = (unsigned int)&v22 & 0xFFFFFFF0;
    v28 = (unsigned int)&v22 & 0xFFFFFFF0;
    v38 = sub_6F937FA0();
    *(double *)&v20 = *(double *)&a7;
    LODWORD(v27) = sub_6F959F20((int)&v38, v21, v27, (int)"%.*Lf", 0);
  }
  v30 = 1;
  sub_6F8FF100(&v38, v27, 0, (int)&v36);
  v11 = v38;
  if ( *(_DWORD *)(v38 - 4) >= 0 )
  {
    v30 = 2;
    sub_6F8FD0E0(&v38);
    v11 = v38;
  }
  v12 = *v26;
  v19 = v11;
  v17 = v28;
  v18 = v28 + v27;
  v13 = *(void (__cdecl **)(unsigned int, _DWORD, int))(v12 + 44);
  v30 = 2;
  v13(v28, v28 + v27, v19);
  if ( (_BYTE)v24 )
  {
    v30 = 2;
    LODWORD(v14) = sub_6F8FC7E0(a2, a3, a5, (unsigned __int16)v23, &v38);
  }
  else
  {
    v30 = 2;
    LODWORD(v14) = sub_6F8FBF60(a2, a3, a5, (unsigned __int16)v23, &v38);
  }
  v27 = v14;
  v15 = v38;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v38 - 4), 0xFFFFFFFF) <= 0 )
    sub_6F8FD6A0((void *)(v15 - 12), (int)&v36);
  sub_6F938380((volatile signed __int32 **)&v37);
  sub_6F8A1AD0((int *)&v29);
  return v27;
}
