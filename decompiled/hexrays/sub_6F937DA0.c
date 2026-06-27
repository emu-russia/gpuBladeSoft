int __thiscall sub_6F937DA0(void *this)
{
  _DWORD *v1; // eax@1
  int v2; // ecx@6
  void (*v3)(void); // eax@8
  _DWORD *v4; // eax@11
  int v5; // ecx@16
  void (*v6)(void); // eax@18
  char *v7; // edx@21
  void *v9; // [sp+0h] [bp-6Ch]@1
  _DWORD *v10; // [sp+10h] [bp-5Ch]@1
  unsigned int v11; // [sp+14h] [bp-58h]@3
  unsigned int v12; // [sp+18h] [bp-54h]@13
  char v13; // [sp+1Ch] [bp-50h]@1
  int v14; // [sp+20h] [bp-4Ch]@8
  int (__cdecl *v15)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-38h]@1
  int *v16; // [sp+38h] [bp-34h]@1
  char *v17; // [sp+3Ch] [bp-30h]@1
  int (__cdecl *v18)(int, int, int, int, int, int, int, int, int, int); // [sp+40h] [bp-2Ch]@1
  int *v19; // [sp+44h] [bp-28h]@1
  char v20; // [sp+50h] [bp-1Ch]@1

  v10 = this;
  v17 = &v20;
  v15 = sub_6F962A50;
  v16 = dword_6F96AAA0;
  v18 = sub_6F937F18;
  v19 = (int *)&v9;
  sub_6F8A1A60((int *)&v13);
  v1 = (_DWORD *)v10[1];
  if ( v1 )
  {
    if ( !v10[2] )
      goto LABEL_30;
    v11 = 0;
    do
    {
      v2 = v1[v11];
      if ( v2 )
      {
        _InterlockedSub((volatile signed __int32 *)(v2 + 4), 1u);
        if ( !v2 )
        {
          v3 = *(void (**)(void))(v0 + 4);
          v14 = 2;
          v3();
        }
        v1 = (_DWORD *)v10[1];
      }
      ++v11;
    }
    while ( v10[2] > v11 );
    if ( v1 )
LABEL_30:
      j_j_free_1(v1);
  }
  v4 = (_DWORD *)v10[3];
  if ( v4 )
  {
    if ( !v10[2] )
      goto LABEL_31;
    v12 = 0;
    do
    {
      v5 = v4[v12];
      if ( v5 )
      {
        _InterlockedSub((volatile signed __int32 *)(v5 + 4), 1u);
        if ( !v5 )
        {
          v6 = *(void (**)(void))(v0 + 4);
          v14 = 4;
          v6();
        }
        v4 = (_DWORD *)v10[3];
      }
      ++v12;
    }
    while ( v10[2] > v12 );
    if ( v4 )
LABEL_31:
      j_j_free_1(v4);
  }
  v11 = 0;
  v7 = (char *)v10[4];
  if ( v7 )
  {
    do
    {
      if ( *(_DWORD *)&v7[v11] )
      {
        v9 = *(void **)&v7[v11];
        j_j_free_1(v9);
        v7 = (char *)v10[4];
      }
      v11 += 4;
    }
    while ( v11 != 24 );
    if ( v7 )
      j_j_free_1(v7);
  }
  return sub_6F8A1AD0((int *)&v13);
}
