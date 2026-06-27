int __fastcall sub_6F8E30E0(int a1, int a2, __int64 a3, int a4, int a5, int a6, _DWORD *a7, int a8)
{
  bool v8; // al@2
  _DWORD *v9; // ecx@6
  int (*v11)(void); // eax@10
  int v12; // eax@12
  char v13; // cl@12
  bool v14; // zf@12
  int v15; // eax@12
  __int64 v16; // [sp+0h] [bp-88h]@1
  int *v17; // [sp+8h] [bp-80h]@1
  int *v18; // [sp+Ch] [bp-7Ch]@1
  char v19; // [sp+23h] [bp-65h]@1
  int v20; // [sp+24h] [bp-64h]@1
  int v21; // [sp+28h] [bp-60h]@1
  int v22; // [sp+2Ch] [bp-5Ch]@1
  int v23; // [sp+30h] [bp-58h]@1
  __int64 v24; // [sp+34h] [bp-54h]@1
  char v25; // [sp+3Ch] [bp-4Ch]@1
  int v26; // [sp+40h] [bp-48h]@1
  int (__cdecl *v27)(int, int, __int64, void (**)(void), int *); // [sp+54h] [bp-34h]@1
  __int16 *v28; // [sp+58h] [bp-30h]@1
  char *v29; // [sp+5Ch] [bp-2Ch]@1
  int (*v30)(); // [sp+60h] [bp-28h]@1
  __int64 *v31; // [sp+64h] [bp-24h]@1
  _DWORD *v32; // [sp+78h] [bp-10h]@1
  int v33; // [sp+7Ch] [bp-Ch]@1
  char v34; // [sp+80h] [bp-8h]@1

  v23 = a1;
  v29 = &v34;
  v24 = a3;
  v22 = a4;
  v21 = a5;
  v27 = sub_6F962A50;
  v28 = &word_6F96B616;
  v30 = sub_6F8E32BD;
  v31 = &v16;
  sub_6F8A1A60((int *)&v25);
  v17 = &v33;
  v26 = -1;
  v32 = sub_6F9081A0(0, 0);
  v26 = 1;
  sub_6F909A00((int *)&v32, 0x20u);
  v24 = sub_6F8E2270(v24, v22, v21, a6, a7, &v32);
  v20 = v24;
  v33 = sub_6F937FA0();
  v18 = &v33;
  sub_6F959A20((int)v32, (double *)a8, a7);
  LOBYTE(v23) = HIDWORD(v24) == -1;
  v19 = v23 & ((_DWORD)v24 != 0);
  if ( v19 )
  {
    LOBYTE(v23) = 0;
    if ( *(_DWORD *)(v24 + 8) >= *(_DWORD *)(v24 + 12) )
    {
      v12 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v24 + 36))(v24);
      v13 = v19;
      v14 = v12 == -1;
      v15 = 0;
      if ( !v14 )
      {
        v15 = v24;
        if ( !v14 )
          v13 = 0;
      }
      v20 = v15;
      LOBYTE(v23) = v13;
    }
  }
  v8 = v21 == -1;
  if ( v22 )
  {
    if ( v8 )
    {
      v8 = 0;
      if ( *(_DWORD *)(v22 + 8) >= *(_DWORD *)(v22 + 12) )
      {
        v11 = *(int (**)(void))(*(_DWORD *)v22 + 36);
        v26 = 1;
        v8 = v11() == -1;
      }
    }
  }
  if ( v8 == (_BYTE)v23 )
    *a7 |= 2u;
  v9 = v32;
  if ( _InterlockedExchangeAdd(v32 - 1, 0xFFFFFFFF) <= 0 )
    sub_6F9086D0(v9 - 3, (int)&v33);
  sub_6F8A1AD0((int *)&v25);
  return v20;
}
