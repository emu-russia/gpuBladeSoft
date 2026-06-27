int sub_6F696070()
{
  int result; // eax@1

  for ( result = glGetError(); result; result = glGetError() )
  {
    switch ( result )
    {
      case 1284:
        nullsub_10();
        break;
      case 1283:
        nullsub_10();
        break;
      case 1282:
        nullsub_10();
        break;
      case 1281:
        nullsub_10();
        break;
      case 1280:
        nullsub_10();
        break;
      case 1285:
        nullsub_10();
        break;
      default:
        nullsub_10();
        break;
    }
    fflush(0);
  }
  return result;
}
