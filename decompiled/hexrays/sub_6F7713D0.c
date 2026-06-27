signed int __cdecl sub_6F7713D0(int a1, int a2, int a3, _DWORD *a4, _DWORD *a5)
{
  signed int result; // eax@1
  unsigned __int32 v6; // edx@2
  int v7; // ebp@8
  int v8; // edi@10
  unsigned __int32 v9; // edx@13
  unsigned __int32 v10; // edx@15
  unsigned __int32 v11; // [sp+1Ch] [bp-30h]@16
  int v12; // [sp+2Ch] [bp-20h]@2

  *a4 = 0;
  result = 81;
  if ( a2 )
  {
    v6 = sub_6F7727E0(a2, &v12);
    result = v12;
    if ( !v12 )
    {
      if ( v6 != 333319 )
        return 2;
      sub_6F7727E0(a2, &v12);
      result = v12;
      if ( !v12 )
      {
        result = sub_6F772040(a2, 16);
        v12 = result;
        if ( !result )
        {
          v7 = (unsigned __int16)sub_6F772620(a2, &v12);
          result = v12;
          if ( !v12 )
          {
            if ( !(_WORD)v7 )
              return 2;
            v8 = 0;
            while ( 1 )
            {
              v9 = sub_6F7727E0(a2, &v12);
              result = v12;
              if ( v12 )
                break;
              if ( v9 == 2 )
              {
                v10 = sub_6F7727E0(a2, &v12);
                if ( !v12 )
                {
                  v11 = v10;
                  sub_6F7727E0(a2, &v12);
                  result = v12;
                  if ( !v12 )
                  {
                    *a5 = v11;
                    return result;
                  }
                }
              }
              else
              {
                result = sub_6F772040(a2, 8);
                v12 = result;
                if ( result )
                  return result;
              }
              if ( ++v8 == v7 )
                return 2;
            }
          }
        }
      }
    }
  }
  return result;
}
