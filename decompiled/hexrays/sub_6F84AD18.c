signed int __cdecl sub_6F84AD18(int a1, int a2, size_t a3, int *a4, int a5)
{
  signed int result; // eax@33
  size_t v6; // [sp+24h] [bp-24h]@8
  _BYTE *v7; // [sp+28h] [bp-20h]@17
  size_t v8; // [sp+2Ch] [bp-1Ch]@10
  int v9; // [sp+30h] [bp-18h]@10
  _BYTE *v10; // [sp+34h] [bp-14h]@10
  int v11; // [sp+38h] [bp-10h]@7
  unsigned int v12; // [sp+3Ch] [bp-Ch]@1

  v12 = -1;
  if ( *(_DWORD *)(a1 + 668) && *(_DWORD *)(a1 + 668) < v12 )
    v12 = *(_DWORD *)(a1 + 668);
  if ( (a5 != 0) + a3 > v12 )
  {
    sub_6F834D5F(a1, -4);
    result = -4;
  }
  else
  {
    v12 -= (a5 != 0) + a3;
    if ( *a4 > v12 )
      *a4 = v12;
    v11 = sub_6F84A9E8(a1, *(_DWORD *)(a1 + 284));
    if ( v11 )
    {
      if ( v11 == 1 )
        v11 = -7;
    }
    else
    {
      v6 = a2 - a3;
      v11 = sub_6F84AB69(a1, *(_DWORD *)(a1 + 284), 1, *(_DWORD *)(a1 + 696) + a3, (int *)&v6, 0, a4);
      if ( v11 == 1 )
      {
        if ( sub_6F892D90(a1 + 132) )
        {
          sub_6F834D5F(a1, v11);
          if ( v11 == 1 )
            v11 = -7;
        }
        else
        {
          v9 = *a4;
          v8 = v9 + a3 + (a5 != 0);
          v10 = sub_6F83B347(a1, v8);
          if ( v10 )
          {
            v11 = sub_6F84AB69(a1, *(_DWORD *)(a1 + 284), 1, *(_DWORD *)(a1 + 696) + a3, (int *)&v6, (int)&v10[a3], a4);
            if ( v11 == 1 )
            {
              if ( *a4 == v9 )
              {
                if ( a5 )
                  *(&v10[a3] + *a4) = 0;
                if ( a3 )
                  memcpy(v10, *(const void **)(a1 + 696), a3);
                v7 = *(_BYTE **)(a1 + 696);
                *(_DWORD *)(a1 + 696) = v10;
                *(_DWORD *)(a1 + 700) = v8;
                v10 = v7;
              }
              else
              {
                v11 = -7;
              }
            }
            else if ( !v11 )
            {
              v11 = -7;
            }
            sub_6F83B5A7(a1, (int)v10);
            if ( v11 == 1 && a2 - a3 != v6 )
              sub_6F839842(a1, "extra compressed data");
          }
          else
          {
            v11 = -4;
            sub_6F834D5F(a1, -4);
          }
        }
      }
      else if ( !v11 )
      {
        v11 = -7;
      }
      *(_DWORD *)(a1 + 128) = 0;
    }
    result = v11;
  }
  return result;
}
