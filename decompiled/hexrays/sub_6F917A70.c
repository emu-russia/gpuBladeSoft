void *__thiscall sub_6F917A70(void *this)
{
  int v1; // edx@1
  int v2; // ecx@2
  int v3; // eax@2
  int v4; // ecx@2
  int v5; // edx@2
  int v6; // edx@2
  int v8; // [sp+0h] [bp-8Ch]@1
  void *v9; // [sp+1Ch] [bp-70h]@1
  char v10; // [sp+23h] [bp-69h]@1
  int *v11; // [sp+24h] [bp-68h]@1
  char *v12; // [sp+28h] [bp-64h]@1
  char v13; // [sp+2Ch] [bp-60h]@1
  int v14; // [sp+30h] [bp-5Ch]@2
  int (__cdecl *v15)(int, int, __int64, void (**)(void), int *); // [sp+44h] [bp-48h]@1
  int *v16; // [sp+48h] [bp-44h]@1
  char *v17; // [sp+4Ch] [bp-40h]@1
  int (__cdecl *v18)(int, int, int, int, int, int, int, int, int, int, char, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, char); // [sp+50h] [bp-3Ch]@1
  int *v19; // [sp+54h] [bp-38h]@1
  int v20; // [sp+6Ch] [bp-20h]@2
  char v21; // [sp+70h] [bp-1Ch]@1

  v9 = this;
  v15 = sub_6F962A50;
  v16 = dword_6F96BE84;
  v17 = &v21;
  v18 = sub_6F917B7A;
  v19 = &v8;
  v11 = (int *)&v13;
  sub_6F8A1A60((int *)&v13);
  v12 = (char *)v9 + 36;
  v10 = sub_6F8BF810((char *)v9 + 36);
  if ( !v10
    || (v14 = 1,
        v20 = (int)v9,
        v10 = sub_6F9173D0((int)v9, v1) ^ 1,
        v2 = v20,
        *(_DWORD *)(v20 + 44) = 0,
        *(_BYTE *)(v2 + 84) = 0,
        sub_6F917640(v2),
        v3 = v20,
        v4 = (int)v12,
        *(_WORD *)(v20 + 69) = 0,
        v5 = *(_DWORD *)(v3 + 60),
        *(_DWORD *)(v3 + 20) = 0,
        *(_DWORD *)(v3 + 4) = v5,
        *(_DWORD *)(v3 + 8) = v5,
        *(_DWORD *)(v3 + 12) = v5,
        v6 = *(_DWORD *)(v3 + 48),
        *(_DWORD *)(v3 + 16) = 0,
        *(_DWORD *)(v3 + 24) = 0,
        *(_DWORD *)(v3 + 52) = v6,
        *(_DWORD *)(v3 + 56) = v6,
        v14 = -1,
        !sub_6F90E4D0(v4))
    || v10 )
  {
    v9 = 0;
  }
  sub_6F8A1AD0(v11);
  return v9;
}
