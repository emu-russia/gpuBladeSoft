signed int __cdecl sub_6F8B65B0(_DWORD *a1)
{
  void *v1; // eax@2
  void *v2; // ebx@2
  int *v3; // edi@3
  signed int v4; // eax@3
  signed int v5; // eax@4
  signed int v6; // eax@5
  signed int v7; // edx@5
  signed int result; // eax@7
  signed int v9; // ST1C_4@8
  signed int v10; // ST1C_4@11
  signed int v11; // ST1C_4@12

  if ( a1 )
  {
    *a1 = 0;
    v1 = calloc(1u, 0x20u);
    v2 = v1;
    if ( v1 )
    {
      v3 = (int *)((char *)v1 + 20);
      *(_DWORD *)v1 = -559042321;
      *((_DWORD *)v1 + 4) = 0;
      *((_DWORD *)v1 + 3) = 0;
      *((_DWORD *)v1 + 2) = 0;
      v4 = sub_6F8B33A0((int *)v1 + 5, 0);
      if ( v4 )
      {
        v9 = v4;
        free(v2);
        result = v9;
      }
      else
      {
        v5 = sub_6F8B33A0((int *)v2 + 6, 0);
        if ( v5 )
        {
          v10 = v5;
          sub_6F8B33F0(v3);
          free(v2);
          result = v10;
        }
        else
        {
          v6 = sub_6F8B1F70((_DWORD *)v2 + 7, 0);
          v7 = v6;
          if ( v6 )
          {
            v11 = v6;
            sub_6F8B33F0(v3);
            sub_6F8B33F0((int *)v2 + 6);
            free(v2);
            v7 = v11;
          }
          else
          {
            *(_DWORD *)v2 = -1162743571;
            *a1 = v2;
          }
          result = v7;
        }
      }
    }
    else
    {
      result = 12;
    }
  }
  else
  {
    result = 22;
  }
  return result;
}
