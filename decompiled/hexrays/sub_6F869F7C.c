int __usercall sub_6F869F7C@<eax>(int a1@<eax>, _BYTE *a2@<edx>, int a3@<ecx>)
{
  int v3; // ebx@1
  int v4; // esi@1
  signed int v5; // eax@1
  signed int v6; // eax@1
  int result; // eax@1
  int v8; // eax@6
  int v9; // edx@10
  signed int v10; // ecx@11
  signed int v11; // edi@15
  int v12; // eax@17
  int v13; // eax@21
  int v14; // eax@22
  int v15; // eax@24
  int v16; // eax@31
  signed int v17; // [sp+Ch] [bp-2Ch]@1
  signed int v18; // [sp+10h] [bp-28h]@1
  int v19; // [sp+18h] [bp-20h]@1
  char v20; // [sp+1Ch] [bp-1Ch]@1

  v3 = a1;
  v4 = *(_DWORD *)(a1 + 404);
  v5 = *a2;
  v17 = v5;
  v6 = dword_6FB9ED00[v5 & 0x7F];
  v20 = v6;
  v18 = v6 >> 8;
  v19 = v6 >> 16;
  result = *(_DWORD *)(v4 + 16) - (v6 >> 16);
  *(_DWORD *)(v4 + 16) = result;
  if ( v17 >> 7 == a3 )
  {
    if ( result > 0x7FFF )
      return result;
    if ( v19 > result )
    {
      *(_DWORD *)(v4 + 12) += result;
      *(_DWORD *)(v4 + 16) = v19;
    }
    *a2 = v18 ^ v17 & 0x80;
  }
  else
  {
    if ( v19 <= result )
    {
      *(_DWORD *)(v4 + 12) += result;
      *(_DWORD *)(v4 + 16) = v19;
    }
    *a2 = v20 ^ v17 & 0x80;
  }
  result = *(_DWORD *)(v4 + 16);
  do
  {
    result *= 2;
    *(_DWORD *)(v4 + 16) = result;
    v10 = 2 * *(_DWORD *)(v4 + 12);
    *(_DWORD *)(v4 + 12) = v10;
    v9 = *(_DWORD *)(v4 + 28) - 1;
    *(_DWORD *)(v4 + 28) = v9;
    if ( !v9 )
    {
      v11 = v10 >> 19;
      if ( v10 >> 19 > 255 )
      {
        v8 = *(_DWORD *)(v4 + 32);
        if ( v8 >= 0 )
        {
          if ( *(_DWORD *)(v4 + 24) )
          {
            do
            {
              sub_6F869D74(0, v3);
              v15 = *(_DWORD *)(v4 + 24) - 1;
              *(_DWORD *)(v4 + 24) = v15;
            }
            while ( v15 );
            v8 = *(_DWORD *)(v4 + 32);
          }
          sub_6F869D74(v8 + 1, v3);
          if ( *(_DWORD *)(v4 + 32) == 254 )
            sub_6F869D74(0, v3);
          v9 = *(_DWORD *)(v4 + 28);
        }
        *(_DWORD *)(v4 + 24) += *(_DWORD *)(v4 + 20);
        *(_DWORD *)(v4 + 20) = 0;
        *(_DWORD *)(v4 + 32) = (unsigned __int8)v11;
        v10 = *(_DWORD *)(v4 + 12);
        result = *(_DWORD *)(v4 + 16);
      }
      else if ( v10 >> 19 == 255 )
      {
        ++*(_DWORD *)(v4 + 20);
        v9 = 0;
      }
      else
      {
        v12 = *(_DWORD *)(v4 + 32);
        if ( v12 )
        {
          if ( v12 >= 0 )
          {
            if ( *(_DWORD *)(v4 + 24) )
            {
              do
              {
                sub_6F869D74(0, v3);
                v16 = *(_DWORD *)(v4 + 24) - 1;
                *(_DWORD *)(v4 + 24) = v16;
              }
              while ( v16 );
              v12 = *(_DWORD *)(v4 + 32);
            }
            sub_6F869D74(v12, v3);
          }
        }
        else
        {
          ++*(_DWORD *)(v4 + 24);
        }
        if ( *(_DWORD *)(v4 + 20) )
        {
          if ( *(_DWORD *)(v4 + 24) )
          {
            do
            {
              sub_6F869D74(0, v3);
              v13 = *(_DWORD *)(v4 + 24) - 1;
              *(_DWORD *)(v4 + 24) = v13;
            }
            while ( v13 );
          }
          do
          {
            sub_6F869D74(-1, v3);
            sub_6F869D74(0, v3);
            v14 = *(_DWORD *)(v4 + 20) - 1;
            *(_DWORD *)(v4 + 20) = v14;
          }
          while ( v14 );
        }
        *(_DWORD *)(v4 + 32) = (unsigned __int8)v11;
        v10 = *(_DWORD *)(v4 + 12);
        v9 = *(_DWORD *)(v4 + 28);
        result = *(_DWORD *)(v4 + 16);
      }
      *(_DWORD *)(v4 + 12) = v10 & 0x7FFFF;
      *(_DWORD *)(v4 + 28) = v9 + 8;
    }
  }
  while ( result <= 0x7FFF );
  return result;
}
