int __cdecl sub_6F95C050(char a1, int a2, int a3, int a4)
{
  int v4; // ecx@1
  int result; // eax@1
  _DWORD *v6; // edi@4
  int v7; // edx@6
  int v8; // ebx@7
  int v9; // edx@15
  int v10; // ebx@15
  int v11; // ebx@17
  _DWORD *v12; // ebp@21
  int v13; // edx@25
  int v14; // edx@27
  int v15; // edi@31
  int v16; // ebx@31
  int v17; // ebx@36
  int v18; // ebx@39
  int v19; // ebx@40
  int v20; // edi@43

  v4 = a2;
  result = a3;
  *(_DWORD *)(a2 + 4) = a3;
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)a2 = 0;
  if ( a1 )
  {
    *(_DWORD *)(a3 + 8) = a2;
    if ( a4 == a3 )
    {
      *(_DWORD *)(a4 + 4) = a2;
      *(_DWORD *)(a4 + 12) = a2;
      *(_DWORD *)a2 = 1;
      return result;
    }
    if ( *(_DWORD *)(a4 + 8) == a3 )
    {
      *(_DWORD *)(a4 + 8) = a2;
      v6 = *(_DWORD **)(a4 + 4);
      goto LABEL_5;
    }
  }
  else
  {
    *(_DWORD *)(a3 + 12) = a2;
    if ( *(_DWORD *)(a4 + 12) == a3 )
      *(_DWORD *)(a4 + 12) = a2;
  }
  v6 = *(_DWORD **)(a4 + 4);
LABEL_5:
  while ( 2 )
  {
    if ( (_DWORD *)v4 != v6 )
    {
      while ( 1 )
      {
        v7 = *(_DWORD *)(v4 + 4);
        result = *(_DWORD *)v7;
        if ( *(_DWORD *)v7 )
          goto LABEL_11;
        result = *(_DWORD *)(v7 + 4);
        v8 = *(_DWORD *)(result + 8);
        if ( v7 == v8 )
          break;
        if ( !v8 || *(_DWORD *)v8 )
        {
          if ( *(_DWORD *)(v7 + 8) == v4 )
          {
            v15 = *(_DWORD *)(v4 + 12);
            v16 = *(_DWORD *)(v7 + 4);
            *(_DWORD *)(v7 + 8) = v15;
            if ( v15 )
            {
              *(_DWORD *)(v15 + 4) = v7;
              v16 = *(_DWORD *)(v7 + 4);
            }
            *(_DWORD *)(v4 + 4) = v16;
            if ( v7 == *(_DWORD *)(a4 + 4) )
            {
              *(_DWORD *)(a4 + 4) = v4;
            }
            else if ( v7 == *(_DWORD *)(v16 + 12) )
            {
              *(_DWORD *)(v16 + 12) = v4;
            }
            else
            {
              *(_DWORD *)(v16 + 8) = v4;
            }
            v17 = v4;
            *(_DWORD *)(v4 + 12) = v7;
            *(_DWORD *)(v7 + 4) = v4;
            v4 = v7;
            v7 = v17;
          }
          *(_DWORD *)v7 = 1;
          v9 = *(_DWORD *)(result + 12);
          *(_DWORD *)result = 0;
          v10 = *(_DWORD *)(v9 + 8);
          *(_DWORD *)(result + 12) = v10;
          if ( v10 )
            *(_DWORD *)(v10 + 4) = result;
          v11 = *(_DWORD *)(result + 4);
          *(_DWORD *)(v9 + 4) = v11;
          if ( result == *(_DWORD *)(a4 + 4) )
          {
            *(_DWORD *)(a4 + 4) = v9;
          }
          else if ( result == *(_DWORD *)(v11 + 8) )
          {
            *(_DWORD *)(v11 + 8) = v9;
          }
          else
          {
            *(_DWORD *)(v11 + 12) = v9;
          }
          *(_DWORD *)(v9 + 8) = result;
          *(_DWORD *)(result + 4) = v9;
          v6 = *(_DWORD **)(a4 + 4);
          goto LABEL_5;
        }
        v4 = *(_DWORD *)(v7 + 4);
        *(_DWORD *)v7 = 1;
        *(_DWORD *)v8 = 1;
        *(_DWORD *)result = 0;
        if ( (_DWORD *)result == v6 )
          goto LABEL_11;
      }
      v12 = *(_DWORD **)(result + 12);
      if ( v12 && !*v12 )
      {
        *(_DWORD *)v7 = 1;
        v4 = result;
        *v12 = 1;
        *(_DWORD *)result = 0;
        continue;
      }
      if ( *(_DWORD *)(v7 + 12) != v4 )
      {
LABEL_25:
        *(_DWORD *)v7 = 1;
        v13 = *(_DWORD *)(v8 + 12);
        *(_DWORD *)result = 0;
        *(_DWORD *)(result + 8) = v13;
        if ( v13 )
          *(_DWORD *)(v13 + 4) = result;
        v14 = *(_DWORD *)(result + 4);
        *(_DWORD *)(v8 + 4) = v14;
        if ( result == *(_DWORD *)(a4 + 4) )
        {
          *(_DWORD *)(a4 + 4) = v8;
        }
        else if ( result == *(_DWORD *)(v14 + 12) )
        {
          *(_DWORD *)(v14 + 12) = v8;
        }
        else
        {
          *(_DWORD *)(v14 + 8) = v8;
        }
        *(_DWORD *)(v8 + 12) = result;
        *(_DWORD *)(result + 4) = v8;
        v6 = *(_DWORD **)(a4 + 4);
        continue;
      }
      v18 = *(_DWORD *)(v4 + 8);
      *(_DWORD *)(v7 + 12) = v18;
      if ( v18 )
      {
        *(_DWORD *)(v18 + 4) = v7;
        v19 = *(_DWORD *)(v7 + 4);
        *(_DWORD *)(v4 + 4) = v19;
        if ( v7 != *(_DWORD *)(a4 + 4) )
        {
          if ( v7 != *(_DWORD *)(v19 + 8) )
          {
            *(_DWORD *)(v19 + 12) = v4;
LABEL_43:
            v20 = v4;
            *(_DWORD *)(v4 + 8) = v7;
            v8 = *(_DWORD *)(result + 8);
            *(_DWORD *)(v7 + 4) = v4;
            v4 = v7;
            v7 = v20;
            goto LABEL_25;
          }
LABEL_51:
          *(_DWORD *)(v19 + 8) = v4;
          goto LABEL_43;
        }
      }
      else
      {
        *(_DWORD *)(v4 + 4) = result;
        v19 = result;
        if ( v7 != *(_DWORD *)(a4 + 4) )
          goto LABEL_51;
      }
      *(_DWORD *)(a4 + 4) = v4;
      goto LABEL_43;
    }
    break;
  }
LABEL_11:
  *v6 = 1;
  return result;
}
