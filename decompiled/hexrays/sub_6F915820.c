_DWORD *__thiscall sub_6F915820(_DWORD *this)
{
  int v1; // ecx@2
  int v2; // eax@2
  int v3; // ecx@2
  int v4; // edx@2
  int v5; // edx@2
  int v7; // [sp+0h] [bp-8Ch]@1
  _DWORD *v8; // [sp+1Ch] [bp-70h]@1
  char v9; // [sp+23h] [bp-69h]@1
  int *v10; // [sp+24h] [bp-68h]@1
  _DWORD *v11; // [sp+28h] [bp-64h]@1
  char v12; // [sp+2Ch] [bp-60h]@1
  int v13; // [sp+30h] [bp-5Ch]@2
  int (__cdecl *v14)(int, int, __int64, void (**)(void), int *); // [sp+44h] [bp-48h]@1
  int *v15; // [sp+48h] [bp-44h]@1
  char *v16; // [sp+4Ch] [bp-40h]@1
  int (__cdecl *v17)(int, int, int, int, int, int, int, int, int, int, char, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, char); // [sp+50h] [bp-3Ch]@1
  int *v18; // [sp+54h] [bp-38h]@1
  _DWORD *v19; // [sp+6Ch] [bp-20h]@2
  char v20; // [sp+70h] [bp-1Ch]@1

  v8 = this;
  v14 = sub_6F962A50;
  v15 = dword_6F96BCEC;
  v16 = &v20;
  v17 = sub_6F91592A;
  v18 = &v7;
  v10 = (int *)&v12;
  sub_6F8A1A60((int *)&v12);
  v11 = v8 + 9;
  v9 = sub_6F8BF810(v8 + 9);
  if ( !v9
    || (v13 = 1,
        v19 = v8,
        v9 = sub_6F915190(v8) ^ 1,
        v1 = (int)v19,
        v19[11] = 0,
        *(_BYTE *)(v1 + 80) = 0,
        sub_6F915400(v1),
        v2 = (int)v19,
        v3 = (int)v11,
        *(_WORD *)((char *)v19 + 69) = 0,
        v4 = *(_DWORD *)(v2 + 60),
        *(_DWORD *)(v2 + 20) = 0,
        *(_DWORD *)(v2 + 4) = v4,
        *(_DWORD *)(v2 + 8) = v4,
        *(_DWORD *)(v2 + 12) = v4,
        v5 = *(_DWORD *)(v2 + 48),
        *(_DWORD *)(v2 + 16) = 0,
        *(_DWORD *)(v2 + 24) = 0,
        *(_DWORD *)(v2 + 52) = v5,
        *(_DWORD *)(v2 + 56) = v5,
        v13 = -1,
        !sub_6F90E4D0(v3))
    || v9 )
  {
    v8 = 0;
  }
  sub_6F8A1AD0(v10);
  return v8;
}
