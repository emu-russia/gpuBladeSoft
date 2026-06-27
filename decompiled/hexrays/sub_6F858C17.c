unsigned int __cdecl sub_6F858C17(int a1, char *a2, unsigned __int8 *a3)
{
  unsigned int result; // eax@2
  char *v4; // eax@4
  unsigned __int8 *v5; // eax@7
  unsigned __int8 *v6; // eax@9
  char v7; // [sp+1Fh] [bp-119h]@24
  unsigned __int8 v8; // [sp+11Fh] [bp-19h]@4
  char *v9; // [sp+120h] [bp-18h]@1
  int v10; // [sp+124h] [bp-14h]@1
  int v11; // [sp+128h] [bp-10h]@1
  unsigned int v12; // [sp+12Ch] [bp-Ch]@1

  v9 = a2;
  v12 = 0;
  v11 = 0;
  v10 = 1;
  if ( a2 )
  {
    while ( *a2 && v12 <= 0x4E )
    {
      v4 = a2++;
      v8 = *v4;
      if ( (v8 <= 0x20u || v8 > 0x7Eu) && v8 <= 0xA0u )
      {
        if ( v10 )
        {
          if ( !v11 )
            v11 = v8;
        }
        else
        {
          v6 = a3++;
          *v6 = 32;
          ++v12;
          v10 = 1;
          if ( v8 != 32 )
            v11 = v8;
        }
      }
      else
      {
        v5 = a3++;
        *v5 = v8;
        ++v12;
        v10 = 0;
      }
    }
    if ( v12 )
    {
      if ( v10 )
      {
        --v12;
        --a3;
        if ( !v11 )
          v11 = 32;
      }
    }
    *a3 = 0;
    if ( v12 )
    {
      if ( *a2 )
      {
        sub_6F839262(a1, "keyword truncated");
      }
      else if ( v11 )
      {
        sub_6F8392E8((int)&v7, 1, v9);
        sub_6F83936E((int)&v7, 2, 4u, v11);
        sub_6F8393DC(a1, (int)&v7, "keyword \"@1\": bad character '0x@2'");
      }
      result = v12;
    }
    else
    {
      result = 0;
    }
  }
  else
  {
    *a3 = 0;
    result = 0;
  }
  return result;
}
