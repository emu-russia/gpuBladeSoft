int __thiscall sub_6F8FEC30(const void **this, int a2, int a3, int a4)
{
  const void **v4; // edi@1
  int v5; // esi@1
  unsigned int v6; // ebx@1
  int v7; // ebp@1
  unsigned int v8; // esi@1
  _DWORD *v9; // eax@4
  _DWORD *v10; // ecx@4
  const void *v11; // esi@5
  volatile signed __int32 *v12; // eax@5
  char *v13; // ecx@7
  int result; // eax@12
  _DWORD *v15; // ST1C_4@14
  int v16; // [sp+18h] [bp-34h]@1
  volatile signed __int32 *v17; // [sp+18h] [bp-34h]@7

  v4 = this;
  v5 = *((_DWORD *)*this - 3);
  v6 = v5 + a4 - a3;
  v16 = a3 + a2;
  v7 = v5 - (a3 + a2);
  v8 = *((_DWORD *)*this - 2);
  if ( v6 > v8 )
  {
LABEL_4:
    v9 = sub_6F8FD810(v6, v8);
    v10 = v9;
    if ( a2 )
    {
      v12 = (volatile signed __int32 *)*v4;
      v11 = v10 + 3;
      if ( a2 == 1 )
      {
        *((_WORD *)v10 + 6) = *(_WORD *)v12;
      }
      else
      {
        v15 = v10;
        memcpy(v10 + 3, *v4, 2 * a2);
        v12 = (volatile signed __int32 *)*v4;
        v10 = v15;
      }
    }
    else
    {
      v11 = v9 + 3;
      v12 = (volatile signed __int32 *)*v4;
    }
    if ( v7 )
    {
      v17 = (volatile signed __int32 *)((char *)v12 + 2 * v16);
      v13 = (char *)v10 + 2 * (a2 + a4) + 12;
      if ( v7 == 1 )
      {
        *(_WORD *)v13 = *(_WORD *)v17;
      }
      else
      {
        memcpy(v13, (const void *)v17, 2 * v7);
        v12 = (volatile signed __int32 *)*v4;
      }
    }
    if ( _InterlockedExchangeAdd(v12 - 1, 0xFFFFFFFF) <= 0 )
      j_free_1((void *)(v12 - 3));
    *v4 = v11;
    goto LABEL_12;
  }
  if ( *((_DWORD *)*this - 1) > 0 )
  {
    v8 = *((_DWORD *)*this - 2);
    goto LABEL_4;
  }
  v11 = *this;
  if ( v7 && a4 != a3 )
  {
    if ( v7 == 1 )
    {
      *((_WORD *)v11 + a2 + a4) = *((_WORD *)v11 + v16);
    }
    else
    {
      memmove((char *)v11 + 2 * (a2 + a4), (char *)v11 + 2 * v16, 2 * v7);
      v11 = *v4;
    }
  }
LABEL_12:
  result = 0;
  *((_DWORD *)v11 - 1) = 0;
  *((_DWORD *)v11 - 3) = v6;
  *((_WORD *)v11 + v6) = 0;
  return result;
}
