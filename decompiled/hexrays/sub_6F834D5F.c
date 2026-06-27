int __cdecl sub_6F834D5F(int a1, int a2)
{
  int result; // eax@1

  result = *(_DWORD *)(a1 + 156);
  if ( !result )
  {
    switch ( a2 )
    {
      default:
        result = a1;
        *(_DWORD *)(a1 + 156) = "unexpected zlib return code";
        break;
      case 1:
        result = a1;
        *(_DWORD *)(a1 + 156) = "unexpected end of LZ stream";
        break;
      case 2:
        result = a1;
        *(_DWORD *)(a1 + 156) = "missing LZ dictionary";
        break;
      case 4294967295:
        result = a1;
        *(_DWORD *)(a1 + 156) = "zlib IO error";
        break;
      case 4294967294:
        result = a1;
        *(_DWORD *)(a1 + 156) = "bad parameters to zlib";
        break;
      case 4294967293:
        result = a1;
        *(_DWORD *)(a1 + 156) = "damaged LZ stream";
        break;
      case 4294967292:
        result = a1;
        *(_DWORD *)(a1 + 156) = "insufficient memory";
        break;
      case 4294967291:
        result = a1;
        *(_DWORD *)(a1 + 156) = "truncated";
        break;
      case 4294967290:
        result = a1;
        *(_DWORD *)(a1 + 156) = "unsupported zlib version";
        break;
      case 4294967289:
        result = a1;
        *(_DWORD *)(a1 + 156) = "unexpected zlib return";
        break;
    }
  }
  return result;
}
