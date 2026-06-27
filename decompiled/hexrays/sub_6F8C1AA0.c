__int64 __thiscall sub_6F8C1AA0(void *this, int a2, int a3, int a4, int a5, int a6, _DWORD *a7)
{
  int v7; // eax@1
  int v8; // eax@1
  int v10; // [sp+0h] [bp-A8h]@1
  int v11; // [sp+8h] [bp-A0h]@1
  int v12; // [sp+Ch] [bp-9Ch]@1
  int v13; // [sp+10h] [bp-98h]@1
  int v14; // [sp+14h] [bp-94h]@1
  int v15; // [sp+18h] [bp-90h]@1
  _TBYTE v16; // [sp+1Ch] [bp-8Ch]@1
  char *v17; // [sp+28h] [bp-80h]@1
  int v18; // [sp+3Ch] [bp-6Ch]@1
  __int64 v19; // [sp+40h] [bp-68h]@1
  int v20; // [sp+48h] [bp-60h]@1
  char v21; // [sp+4Ch] [bp-5Ch]@1
  int v22; // [sp+50h] [bp-58h]@1
  int (__cdecl *v23)(int, int, __int64, void (**)(void), int *); // [sp+64h] [bp-44h]@1
  int *v24; // [sp+68h] [bp-40h]@1
  char *v25; // [sp+6Ch] [bp-3Ch]@1
  int (*v26)(); // [sp+70h] [bp-38h]@1
  int *v27; // [sp+74h] [bp-34h]@1
  char v28; // [sp+84h] [bp-24h]@1
  int v29; // [sp+88h] [bp-20h]@1
  void (__cdecl *v30)(int *); // [sp+9Ch] [bp-Ch]@1
  char v31; // [sp+A0h] [bp-8h]@1

  LODWORD(v19) = this;
  v23 = sub_6F962A50;
  v20 = a4;
  v25 = &v31;
  v18 = a6;
  v24 = &dword_6F96C364;
  v26 = sub_6F8C1B88;
  v27 = &v10;
  sub_6F8A1A60((int *)&v21);
  v30 = 0;
  v22 = 1;
  sub_6F8FEF30((int *)&v28, a7);
  v7 = *(_DWORD *)(*a7 - 12);
  v30 = sub_6F9119D0;
  v29 = v7;
  v17 = &v28;
  *(double *)&v16 = 0.0;
  v15 = (unsigned __int16)v18;
  v14 = a5;
  v13 = (unsigned __int8)v20;
  v11 = a2;
  v12 = a3;
  v8 = *(_DWORD *)(v19 + 8);
  LOBYTE(v10) = 0;
  v19 = sub_6F910620(v10, v8, a2, a3, (unsigned __int8)v20, a5, (unsigned __int16)v18, v16, (int)&v28);
  if ( v30 )
  {
    v22 = 0;
    v30((int *)&v28);
  }
  sub_6F8A1AD0((int *)&v21);
  return v19;
}
