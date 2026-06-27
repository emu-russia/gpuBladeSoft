int __thiscall sub_6F954F50(_DWORD *this, int a2)
{
  void (__cdecl *v2)(int, _DWORD *, int); // eax@2
  int v4; // [sp+0h] [bp-6Ch]@1
  _DWORD *v5; // [sp+4h] [bp-68h]@2
  int v6; // [sp+8h] [bp-64h]@2
  int v7; // [sp+10h] [bp-5Ch]@1
  _DWORD *v8; // [sp+14h] [bp-58h]@1
  int *v9; // [sp+18h] [bp-54h]@1
  char v10; // [sp+1Ch] [bp-50h]@1
  int v11; // [sp+20h] [bp-4Ch]@2
  int (__cdecl *v12)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-38h]@1
  int *v13; // [sp+38h] [bp-34h]@1
  char *v14; // [sp+3Ch] [bp-30h]@1
  int (__cdecl *v15)(int, int, int, int, int, int, int, int, int, int); // [sp+40h] [bp-2Ch]@1
  int *v16; // [sp+44h] [bp-28h]@1
  char v17; // [sp+50h] [bp-1Ch]@1

  v8 = this;
  v9 = (int *)&v10;
  v12 = sub_6F962A50;
  v13 = dword_6F96ADD4;
  v14 = &v17;
  v15 = sub_6F954FF3;
  v16 = &v4;
  sub_6F8A1A60((int *)&v10);
  v7 = v8[6];
  if ( v7 )
  {
    do
    {
      v6 = *(_DWORD *)(v7 + 8);
      v5 = v8;
      v4 = a2;
      v2 = *(void (__cdecl **)(int, _DWORD *, int))(v7 + 4);
      v11 = 1;
      v2(a2, v8, v6);
      v7 = *(_DWORD *)v7;
    }
    while ( v7 );
    v9 = (int *)&v10;
  }
  return sub_6F8A1AD0(v9);
}
