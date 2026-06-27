size_t __thiscall sub_6F93C2B0(int this, size_t a2, int a3, const void *a4, size_t a5)
{
  int v5; // ebx@1
  int v6; // edi@1
  unsigned int v7; // eax@2
  _BYTE *v8; // eax@3
  char *v9; // edx@3
  _BYTE *v10; // ebp@3
  char *v11; // ST1C_4@5
  char *v12; // ST1C_4@9
  char *v13; // esi@11
  char *v14; // eax@11
  char *v15; // ST18_4@12
  size_t result; // eax@15
  size_t v17; // [sp+14h] [bp-38h]@1
  size_t v18; // [sp+2Ch] [bp-20h]@1

  v5 = this;
  v17 = *(_DWORD *)(this + 4) - (a2 + a3);
  v6 = this + 8;
  v18 = *(_DWORD *)(this + 4) + a5 - a3;
  if ( v5 + 8 == *(_DWORD *)v5 )
    v7 = 15;
  else
    v7 = *(_DWORD *)(this + 8);
  v8 = sub_6F93C230(&v18, v7);
  v9 = *(char **)v5;
  v10 = v8;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      *v8 = *v9;
    }
    else
    {
      v11 = *(char **)v5;
      memcpy(v8, *(const void **)v5, a2);
      v9 = v11;
    }
  }
  if ( a4 && a5 )
  {
    if ( a5 == 1 )
    {
      v10[a2] = *(_BYTE *)a4;
    }
    else
    {
      v12 = v9;
      memcpy(&v10[a2], a4, a5);
      v9 = v12;
    }
  }
  if ( v17 )
  {
    v13 = &v10[a5] + a2;
    v14 = &v9[a2] + a3;
    if ( v17 == 1 )
    {
      *v13 = *v14;
    }
    else
    {
      v15 = v9;
      memcpy(v13, v14, v17);
      v9 = v15;
    }
  }
  if ( (char *)v6 != v9 )
    j_free_1(v9);
  result = v18;
  *(_DWORD *)v5 = v10;
  *(_DWORD *)(v5 + 8) = result;
  return result;
}
