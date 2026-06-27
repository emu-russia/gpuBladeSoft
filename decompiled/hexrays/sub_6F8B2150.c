signed int __cdecl sub_6F8B2150(void *a1, signed int a2, DWORD a3)
{
  signed int v3; // edi@1
  unsigned int v4; // ebx@1
  DWORD v5; // eax@3
  signed int v6; // ebx@4
  bool v7; // al@7
  DWORD v9; // eax@17
  DWORD v10; // eax@24
  DWORD v11; // eax@29
  bool v12; // al@33
  DWORD v13; // eax@48
  void *v14; // [sp+18h] [bp-24h]@2
  void *v15; // [sp+1Ch] [bp-20h]@2

  v3 = a2;
  v4 = a3;
  if ( a2 == 1 )
  {
    v13 = WaitForSingleObject(a1, a3);
    if ( v13 != 128 )
    {
      if ( v13 != 258 )
      {
        v6 = 22;
        if ( !v13 )
          return 0;
        return v6;
      }
      v3 = 138;
    }
    v6 = v3;
    if ( !WaitForSingleObject(a1, 0) )
      return 0;
    return v6;
  }
  v14 = a1;
  v15 = (void *)sub_6F8B4AA0();
  if ( !v15 )
  {
    if ( a3 == -1 )
    {
      while ( 1 )
      {
        v10 = WaitForSingleObject(a1, 0x28u);
        if ( v10 == 128 )
        {
          if ( !sub_6F8B4C20() )
            return WaitForSingleObject(a1, 0) != 0;
          goto LABEL_58;
        }
        if ( v10 != 258 )
          break;
        if ( sub_6F8B4C20() )
          goto LABEL_58;
      }
      if ( !v10 )
        return 0;
      if ( !sub_6F8B4C20() )
        return 22;
LABEL_58:
      if ( a2 == 2 )
        return 22;
LABEL_59:
      sub_6F8B4D50();
      v6 = 22;
    }
    else
    {
      while ( v4 > 0x13 )
      {
        v9 = WaitForSingleObject(a1, 0x14u);
        if ( v9 == 128 )
        {
          if ( v4 != 20 )
          {
            if ( sub_6F8B4C20() )
              return 22;
            v6 = 1;
LABEL_38:
            v12 = v6 != 0;
            goto LABEL_34;
          }
LABEL_42:
          v6 = 1;
          goto LABEL_33;
        }
        if ( v9 != 258 )
        {
          if ( v9 )
          {
            if ( v4 != 20 )
            {
              if ( sub_6F8B4C20() )
                return 22;
              v6 = 22;
              goto LABEL_38;
            }
LABEL_32:
            v6 = 22;
LABEL_33:
            v12 = 1;
            goto LABEL_34;
          }
LABEL_37:
          v6 = 0;
          goto LABEL_38;
        }
        v4 -= 20;
        if ( !v4 )
          goto LABEL_40;
        if ( sub_6F8B4C20() )
          return 22;
      }
      v11 = WaitForSingleObject(a1, v4);
      if ( v11 == 128 )
        goto LABEL_42;
      if ( v11 != 258 )
      {
        if ( v11 )
          goto LABEL_32;
        goto LABEL_37;
      }
LABEL_40:
      if ( !WaitForSingleObject(a1, 0) )
        return 0;
      v12 = 1;
      v6 = 138;
LABEL_34:
      if ( a2 != 2 && v12 )
        sub_6F8B4D50();
    }
    return v6;
  }
  while ( 1 )
  {
    v5 = WaitForMultipleObjects(2u, &v14, 0, a3);
    if ( v5 != 1 )
      break;
    ResetEvent(v15);
    if ( a2 != 2 )
      goto LABEL_59;
    sub_6F8B4D50();
  }
  v6 = 0;
  if ( !v5 )
    return v6;
  if ( v5 == 128 )
  {
    v6 = 1;
  }
  else
  {
    if ( v5 != 258 )
    {
      v6 = 22;
      v7 = a2 != 2;
      goto LABEL_8;
    }
    v6 = 138;
  }
  if ( !WaitForSingleObject(v14, 0) )
    return 0;
  v7 = a2 != 2;
LABEL_8:
  if ( !v7 || !sub_6F8B4C20() )
    return v6;
  return 22;
}
