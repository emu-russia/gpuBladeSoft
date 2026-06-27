signed int __usercall sub_6F771010@<eax>(int a1@<eax>, int a2@<edx>, _DWORD *a3@<ecx>)
{
  int v3; // ebp@1
  _DWORD *v4; // edi@1
  int v5; // ebx@1
  unsigned __int32 v6; // eax@1
  signed int v7; // ecx@1
  unsigned __int16 v9; // ax@7
  int v10; // ebp@9
  unsigned __int32 v11; // eax@12
  unsigned __int32 v12; // edx@14
  int v13; // [sp+18h] [bp-34h]@9
  unsigned __int32 v14; // [sp+1Ch] [bp-30h]@15
  int v15; // [sp+2Ch] [bp-20h]@1

  v3 = a2;
  v4 = a3;
  v5 = a1;
  v6 = sub_6F7727E0(a1, &v15);
  v7 = v15;
  if ( !v15 )
  {
    if ( v6 != v3 )
      return 2;
    sub_6F7727E0(v5, &v15);
    v7 = v15;
    if ( !v15 )
    {
      v7 = sub_6F772040(v5, 16);
      v15 = v7;
      if ( !v7 )
      {
        v9 = sub_6F772620(v5, &v15);
        v7 = v15;
        if ( !v15 )
        {
          if ( !v9 )
            return 2;
          v10 = 0;
          v13 = v9;
          while ( 1 )
          {
            v11 = sub_6F7727E0(v5, &v15);
            v7 = v15;
            if ( v15 )
              break;
            if ( v11 == 2 )
            {
              v12 = sub_6F7727E0(v5, &v15);
              if ( !v15 )
              {
                v14 = v12;
                sub_6F7727E0(v5, &v15);
                v7 = v15;
                if ( !v15 )
                {
                  *v4 = v14;
                  return v7;
                }
              }
            }
            else
            {
              v7 = sub_6F772040(v5, 8);
              v15 = v7;
              if ( v7 )
                return v7;
            }
            if ( ++v10 == v13 )
              return 2;
          }
        }
      }
    }
  }
  return v7;
}
